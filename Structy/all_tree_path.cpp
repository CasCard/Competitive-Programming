//
// Created by abel_ on 03-10-2022.
//
#include <vector>
#include <string>

class Node{
public:
    std::string value;
    Node* left;
    Node* right;

    Node(std::string value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

std::vector<std::vector<std::string>> allTreePaths(Node* root){
    if(root == nullptr) return {};
    else{
        std::vector<std::string> paths = {{root->value}};
    }
    return {allTreePaths(root->left),allTreePaths(root->right)};

}

int main(){
    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    allTreePaths(&a);
    return 0;
}