//
// Created by abel_ on 15-10-2022.
//

#include <unordered_set>
#include <vector>
#include <iostream>

bool explore(std::vector<std::vector<char>> grid,int row,int col, std::unordered_set<std::string> &visited){
    bool rowInbounds = row >= 0 and row < grid.size();
    bool colInbounds = col >= 0 and col < grid[0].size();
    if(!rowInbounds or !colInbounds) return false;

    if(grid[row][col] == 'W') return false;

    std::string key = std::to_string(row) + "," + std::to_string(col);
    if(visited.count(key) > 0) return false;
    visited.insert(key);
    explore(grid,row-1,col,visited);
    explore(grid,row+1,col,visited);
    explore(grid,row,col-1,visited);
    explore(grid,row,col+1,visited);
    return true;
}

int islandCount(std::vector<std::vector<char>> grid){
    int count = 0;
    std::unordered_set<std::string> visited;
    for (int row = 0; row < grid.size(); ++row) {
        for (int col = 0; col < grid.size(); ++col) {
            if (explore(grid, row, col, visited)) count++;
        }
    }
    return count;
}

int main(){

    std::vector<std::vector<char>> grid {
            {'W', 'L', 'W', 'W', 'W'},
            {'W', 'L', 'W', 'W', 'W'},
            {'W', 'W', 'W', 'L', 'W'},
            {'W', 'W', 'L', 'L', 'W'},
            {'L', 'W', 'W', 'L', 'L'},
            {'L', 'L', 'W', 'W', 'W'}
    };
    std::cout << islandCount(grid); // -> 3

    return 0;
}