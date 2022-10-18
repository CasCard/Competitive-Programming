//
// Created by abel_ on 15-10-2022.
//

#include <vector>
#include <stack>
#include <unordered_set>
#include <iostream>
#include <tuple>
#include <algorithm>

std::vector<std::tuple<int,int>> get_neighbors(std::vector<std::vector<char>> &matrix,int row,int col){
    std::vector<std::tuple<int,int>> neighbors;
    int row_limit = matrix.size();
    int col_limit = matrix[0].size();
    if(col + 1 < col_limit and matrix[row][col+1] == 'L') neighbors.push_back(std::make_tuple(row,col+1));
    if(col - 1 >= 0 and matrix[row][col-1] == 'L') neighbors.push_back(std::make_tuple(row,col-1));
    if(row + 1 < row_limit and matrix[row+1][col] == 'L') neighbors.push_back(std::make_tuple(row+1,col));
    if(row - 1 >= 0 and matrix[row-1][col] == 'L') neighbors.push_back(std::make_tuple(row-1,col));
    return neighbors;
}

int minimumIsland(std::vector<std::vector<char>> &grid){
    int count = 0;
//  set min to infinity
    int islandSize = 0;
    std::unordered_set<int> islandCountSet;
    std::vector<std::tuple<int,int>> visited;
    std::stack<std::tuple<int,int>> stack;
    for(int row = 0; row < grid.size(); ++row){
        for(int col = 0; col < grid.size(); ++col){
            if(grid[row][col] == 'L' and std::find(visited.begin(),visited.end(),std::make_tuple(row,col)) == visited.end()){
                visited.push_back(std::make_tuple(row,col));
                stack.push({row,col});
                count++;
                islandSize = 1;
            }
            while(!stack.empty()) {
                auto [currentRow, currentCol] = stack.top();
                stack.pop();
                for (auto neighbor: get_neighbors(grid, currentRow, currentCol)) {
                    if (std::find(visited.begin(), visited.end(), neighbor) == visited.end()) {
                        visited.push_back(neighbor);
                        stack.push(neighbor);
                        islandSize++;
                    }
                }
            }
            if(islandSize > 0) islandCountSet.insert(islandSize);
        }
    }
    return *std::min_element(islandCountSet.begin(),islandCountSet.end());
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