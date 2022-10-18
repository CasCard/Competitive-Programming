//
// Created by abel_ on 15-10-2022.
//

//
// Created by abel_ on 15-10-2022.
//

#include <vector>
#include <stack>
#include <unordered_set>
#include <iostream>
#include <tuple>
#include <algorithm>
#include <limits>

int explore(std::vector<std::vector<char>> &grid ,int row,int column,std::unordered_set<std::string> &visited){
    int rowInbounds = row >= 0 and row < grid.size();
    int colInbounds = column >= 0 and column < grid[0].size();
    if(!rowInbounds or !colInbounds) return 0;
    int islandSize = 0;
    if(grid[row][column] == 'W') return 0;

    std::string key = std::to_string(row) + "," + std::to_string(column);

    if(visited.count(key) > 0) return 0;
    visited.insert(key);

    islandSize += explore(grid,row-1,column,visited);
    islandSize += explore(grid,row+1,column,visited);
    islandSize += explore(grid,row,column-1,visited);
    islandSize += explore(grid,row,column+1,visited);
    return islandSize + 1;
}

int minimumIsland(std::vector<std::vector<char>> &grid){
    int minIslandCount = std::numeric_limits<int>::max();
    std::unordered_set<std::string> visited;
    for(int row=0;row<grid.size();row++){
        for(int column=0;column<grid.size();column++){
            int islandSize = explore(grid,row,column,visited);
//            std::cout << islandSize << std::endl;
            if(islandSize > 0 and islandSize < minIslandCount) minIslandCount = islandSize;
        }
    }
    return minIslandCount;
}


int main(){
    std::vector<std::vector<char>> grid {
            {'W', 'W'},
            {'L', 'L'},
            {'W', 'W'},
            {'W', 'L'}
    };
    std::cout<<minimumIsland(grid); // -> 2
    return 0;
}