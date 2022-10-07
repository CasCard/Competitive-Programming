#include <vector>
#include <string>


class Node {
public:
    std::string val;
    Node* left;
    Node* right;


    Node(std::string initialVal) {
        val = initialVal;
        left = nullptr;
        right = nullptr;
    }
};


std::vector<std::string> leafList(Node* root, std::vector<std::string> &leafs) {
    // todo
    if(root == nullptr) return leafs;
    if(root->left == nullptr && root->right == nullptr) leafs.push_back(root->val);
    leafList(root->left,leafs);
    leafList(root->right,leafs);
    return leafs;
}


std::vector<std::string> leafList(Node* root) {
    std::vector<std::string> leafs;
    leafList(root,leafs);
    return leafs;
}

int main(){
    return 0;
}
