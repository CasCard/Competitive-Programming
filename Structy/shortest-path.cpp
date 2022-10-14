//
// Created by abel_ on 13-10-2022.
//
#include <vector>
#include <tuple>
#include <string>
#include <stack>
#include <unordered_set>
#include <iostream>
#include <unordered_map>
#include <algorithm>

int shortestPath(std::vector<std::tuple<std::string, std::string>> edges, std::string nodeA, std::string nodeB) {

    std::unordered_map<std::string,std::vector<std::string>> graph;

    for (auto edge : edges) {
        auto [src, dst] = edge;
        graph[src].push_back(dst);
        graph[dst].push_back(src);
    }

    std::stack<std::tuple<std::string,int>> stack;
    std::unordered_set<std::string> visited;
    stack.push({nodeA,0});
    while(!stack.empty()){
        auto [currentNode, distance] = stack.top();
        visited.insert(currentNode);
        stack.pop();
        if(currentNode == nodeB) return distance;
        if(std::find(graph[currentNode].begin(),graph[currentNode].end(),nodeB) != graph[currentNode].end()) return distance + 1;

        for (auto neighbour : graph[currentNode]) {
            if(visited.count(neighbour) == 0){
                stack.push({neighbour,distance+1});
            }
        }
    }


    return -1;
}

int main(){
    std::vector<std::tuple<std::string, std::string>> edges {
            {"w", "x"},
            {"x", "y"},
            {"z", "y"},
            {"z", "v"},
            {"w", "v"}
    };
    std::cout<<shortestPath(edges, "w", "z"); // -> 2
    return 0;
}
