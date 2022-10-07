//
// Created by abel_ on 28-09-2022.
//
#include<bits/stdc++.h>

#include<queue>

class Node{
    public:
        int value;
        Node* left;
        Node* right;

        Node(int value){
            this->value = value;
            this->left = nullptr;
            this->right = nullptr;
        }
};

int treeValueCount(Node* root,int targetVal){
    std::queue<Node*> q;
    q.push(root);
    int count = 0;
    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        if(current->value == targetVal) count++;
        if(current->left != nullptr) q.push(current->left);
        if(current->right != nullptr) q.push(current->right);
    }
    return count;
}

