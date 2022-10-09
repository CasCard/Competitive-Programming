//
// Created by abel_ on 09-10-2022.
//
#include <vector>
#include <tuple>
#include <string>
#include <unordered_map>
#include<unordered_set>
#include <iostream>
#include <stack>

std::unordered_map<std::string,std::vector<std::string>> makeGraph(std::vector<std::tuple<std::string, std::string>> edges){
    std::unordered_map<std::string,std::vector<std::string>> graph;
    for(auto edge : edges){
        auto [src,dst] = edge;
        graph[src].push_back(dst);
        graph[dst].push_back(src);
    }
    return graph;
}

bool explore(std::unordered_map<std::string,std::vector<std::string>> graph, std::string src, std::string dst,std::unordered_set<std::string> &visited){
    if(src == dst) return true;

    if(visited.count(src) > 0){
        return false;
    }
    visited.insert(src);

    for(auto neighbor : graph[src]){
        if(explore(graph,neighbor,dst,visited)) return true;
    }

    return false;
}

bool undirectedPath(std::vector<std::tuple<std::string, std::string>> edges, std::string src, std::string dst) {
    std::unordered_map<std::string,std::vector<std::string>> graph = makeGraph(edges);
    std::unordered_set<std::string> visited;
    return explore(graph,src,dst,visited);
}

int main(){
    std::vector<std::tuple<std::string, std::string>> edges {
            {"i", "j"},
            {"k", "i"},
            {"m", "k"},
            {"k", "l"},
            {"o", "n"}
    };

    undirectedPath(edges, "j", "m"); // -> 1 (true)
    return 0;
}
