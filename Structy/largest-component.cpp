//
// Created by abel_ on 11-10-2022.
//

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>

bool explore(std::unordered_map<int, std::vector<int>> graph,int currentNode , std::unordered_set<int> &visited){
    if(visited.count(currentNode) > 0) return false;
    visited.insert(currentNode);

    for(int neighbour : graph[currentNode]){
        explore(graph,neighbour,visited);
    }
    return true;
}

int largestComponent(std::unordered_map<int, std::vector<int>> graph) {
    // todo
    int largest = 0;
    std::unordered_set<int> visited;
    for(auto node : graph){
        if (explore(graph,node.first,visited)){
            if(visited.size() > largest) largest = visited.size();
            visited.clear();
        }
    }
    return largest;
}


int main(){
    std::unordered_map<int, std::vector<int>> graph {
            { 0, { 8, 1, 5 } },
            { 1, { 0 } },
            { 5, { 0, 8 } },
            { 8, { 0, 5 } },
            { 2, { 3, 4 } },
            { 3, { 2, 4 } },
            { 4, { 3, 2 } }
    };
    int ans  = largestComponent(graph); // -> 2
    std::cout << ans << std::endl;
    return 0;
}
