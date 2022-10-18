//
// Created by abel_ on 18-10-2022.
//

#include <queue>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <unordered_set>
#include <algorithm>

std::vector<std::tuple<int,int,int>> get_neighbors(int row,int col,std::vector<std::vector<char>> &grid,int current_level = 0){
    std::vector<std::tuple<int,int,int>> neighbors;
    int rowBounds = grid.size();
    int colBounds = grid[0].size();

    if(row+1 < rowBounds){
        char value = grid[row+1][col];
        if(value == 'C' or value == 'O') neighbors.push_back(std::make_tuple(row+1,col,current_level+1));
    }
    if(row-1 >= 0){
        char value = grid[row-1][col];
        if(value == 'C' or value == 'O') neighbors.push_back(std::make_tuple(row-1,col,current_level+1));
    }
    if(col+1 < colBounds){
        char value = grid[row][col+1];
        if(value == 'C' or value == 'O') neighbors.push_back(std::make_tuple(row,col+1,current_level+1));
    }
    if(col-1 >= 0){
        char value = grid[row][col-1];
        if(value == 'C' or value == 'O') neighbors.push_back(std::make_tuple(row,col-1,current_level+1));
    }
    return neighbors;
}

int closestCarrot(std::vector<std::vector<char>> grid, int startRow, int startCol) {
    std::queue<std::tuple<int,int,int>> queue;
    std::vector<std::tuple<int,int>> visited;
    queue.push({startRow,startCol,0});
    int steps = 0;
    while(!queue.empty()){
        auto [row,col,level] = queue.front();
        queue.pop();
        if(visited.end() == std::find(visited.begin(),visited.end(),std::make_tuple(row,col))){
            visited.push_back(std::make_tuple(row,col));
            if(grid[row][col] == 'C') return level;
            for(auto neighbor : get_neighbors(row,col,grid,level)){
                queue.push(neighbor);
            }
        }
    }
    return -1;
}

int main(){
    std::vector<std::vector<char>> grid {
            {'O', 'O', 'O', 'O', 'O'},
            {'O', 'X', 'O', 'O', 'O'},
            {'O', 'X', 'X', 'O', 'O'},
            {'O', 'X', 'C', 'O', 'O'},
            {'O', 'X', 'X', 'O', 'O'},
            {'C', 'O', 'O', 'O', 'O'}
    };
    std::cout<<closestCarrot(grid, 1, 2); // -> 4
    return 0;
}

