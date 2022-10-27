//
// Created by abel_ on 27-10-2022.
//
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

int traverse_distance(std::unordered_map<char, std::vector<char>> graph , char node , std::unordered_map<char,int> distance){
    if(distance.count(node) > 0) return distance[node];
    int max_distance = 0;
    for(char neighbor : graph[node]){
        int distance_to_neighbor = traverse_distance(graph,neighbor,distance);
        max_distance = std::max(max_distance,distance_to_neighbor);
    }
    distance[node] = max_distance + 1;
    return distance[node];
}

int longestPath(std::unordered_map<char, std::vector<char>> graph) {
    // todo
    std::unordered_map<char,int> distances;
    for(auto &node:graph){
        if (distances.count(node.first) == 0) distances[node.first] = 0;
    }
    for(auto &node:graph){
        distances[node.first] = traverse_distance(graph,node.first,distances);
    }
    return std::max_element(distances.begin(),distances.end(),[](auto &a, auto &b){return a.second < b.second;})->second;
}


int main(){
    std::unordered_map<char, std::vector<char>> graph {
            { 'a', {'c', 'b'} },
            { 'b', {'c'} },
            { 'c', {} },
            { 'q', {'r'} },
            { 'r', {'s', 'u', 't'} },
            { 's', {'t'} },
            { 't', {'u'} },
            { 'u', {} }
    };
    std::cout<<longestPath(graph); // -> 4
}

