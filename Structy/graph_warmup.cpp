//
// Created by abel_ on 09-10-2022.
//
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>

//void depthFirstPrint(std::unordered_map<std::string,std::vector<std::string>> graph,std::string startNode){
//    std::stack<std::string> stack;
//    stack.push(startNode);
//
//    while(!stack.empty()){
//        std::string currentNode = stack.top();
//        std::cout << currentNode << std::endl;
//        stack.pop();
//        for(std::string neighbor : graph[currentNode]){
//            stack.push(neighbor);
//        }
//    }
//}


void breadthFirstPrint(std::unordered_map<std::string,std::vector<std::string>> graph,std::string start){
    std::queue<std::string> queue;
    queue.push(start);
    while(!queue.empty()){
        std::string currentNode = queue.front();
        std::cout << currentNode << std::endl;
        queue.pop();
        for(std::string neighbor : graph[currentNode]){
            queue.push(neighbor);
        }
    }
}

//void depthFirstPrint(std::unordered_map<std::string,std::vector<std::string>> graph,std::string currentNode){
//    std::cout << currentNode << std::endl;
//    for(std::string neighbor : graph[currentNode]){
//        depthFirstPrint(graph,neighbor);
//    }
//}

int main(){
    std::unordered_map<std::string,std::vector<std::string>> graph {
            {"a",{"b","c"}},
            {"b",{"d"}},
            {"c",{"e"}},
            {"d",{"f"}},
            {"e",{"f"}},
            {"f",{}}
    };

    breadthFirstPrint(graph,"a");
}