//
// Created by abel_ on 09-10-2022.
//
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include <stack>


//bool hasPath(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {
//    std::stack<std::string> stack;
//    stack.push(src);
//    while (!stack.empty()) {
//        std::string currentNode = stack.top();
//        stack.pop();
//        if (currentNode == dst) {
//            return true;
//        }
//        for (std::string neighbor : graph[currentNode]) {
//            stack.push(neighbor);
//        }
//    }
//    return false;
//}


bool hasPath(std::unordered_map<std::string,std::vector<std::string>> graph,std::string currentNode, std::string src, std::string dst){
    if(currentNode == dst) return true;
    for(std::string neighbor : graph[currentNode]){
        if(hasPath(graph,neighbor,src,dst)) return true;
    }
    return false;
}

bool hasPath(std::unordered_map<std::string,std::vector<std::string>> graph,std::string src,std::string dst){
    return hasPath(graph,src,src,dst);
}

//bool hasPath(std::unordered_map<std::string, std::vector<std::string>> graph, std::string src, std::string dst) {
//    std::stack<std::string> stack;
//    stack.push(src);
//    while (!stack.empty()) {
//        std::string currentNode = stack.top();
//        stack.pop();
//        if (currentNode == dst) {
//            return true;
//        }
//        for (std::string neighbor : graph[currentNode]) {
//            stack.push(neighbor);
//        }
//    }
//    return false;
//}

int main(){
    std::unordered_map<std::string, std::vector<std::string>> graph {
            { "f", {"g", "i"} },
            { "g", {"h"} },
            { "h", {} },
            { "i", {"g", "k"} },
            { "j", {"i"} },
            { "k", {} }
    };

    hasPath(graph, "f", "k"); // 1 (true)
}