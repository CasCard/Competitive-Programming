//
// Created by abel_ on 10-10-2022.
//
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>



//int connectedComponentsCount(std::unordered_map<int, std::vector<int>> graph) {
//    // todo
//    std::vector<int> visited;
//    std::stack<int> stack;
//    int count = 0;
//    for(auto node :graph){
//        auto [src,neighbors] = node;
//        if(std::find(visited.begin(), visited.end(),src) == visited.end()){
//            stack.push(src);
//            while(stack.size()  > 0 ){
//                int current = stack.top();
//                stack.pop();
//                if(std::find(visited.begin(),visited.end(),current) == visited.end()) {
//                    visited.push_back(current);
//                    for (auto neighbour: graph[current]) {
//                        stack.push(neighbour);
//                    }
//                }
//            }
//            count++;
//        }
//    }
//    return count;
//}

bool explore(std::unordered_map<int, std::vector<int>> graph,int currentNode , std::unordered_set<int> &visited){
    if(visited.count(currentNode) > 0) return false;
    visited.insert(currentNode);

    for(int neighbour : graph[currentNode]){
        explore(graph,neighbour,visited);
    }
    return true;
}



int connectedComponentsCount(std::unordered_map<int, std::vector<int>> graph) {
    int count = 0;
    std::unordered_set<int> visited;
    for(auto node : graph){
        if(explore(graph,node.first,visited)) count++;
    }
    return count;
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
    int ans  = connectedComponentsCount(graph); // -> 2
    std::cout << ans << std::endl;
    return 0;
}

