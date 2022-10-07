#include <vector>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <algorithm>

class Node {
public:
    float val;
    Node* left;
    Node* right;


    Node(float initialVal) {
        val = initialVal;
        left = nullptr;
        right = nullptr;
    }
};



std::vector<float> levelAverages(Node* root) {
    // todo
    std::stack<std::tuple<Node*,int>> queueB;
    std::unordered_map<int,std::tuple<float,int>> average_dict;
    // std::vector<std::pair<float,int>> averages;
    queueB.push(std::make_tuple(root,0));

    while(queueB.size() > 0){
        std::tuple<Node*,int> current = queueB.top();
        Node* current_node = std::get<0>(current);
        int current_level = std::get<1>(current);
        average_dict[current_level] = std::make_tuple(std::get<0>(average_dict[current_level]) + current_node->val,std::get<1>(average_dict[current_level]) + 1);
        queueB.pop();
        if(current_node->left != nullptr) queueB.push(std::make_tuple(current_node->left,current_level+1));
        if(current_node->right != nullptr) queueB.push(std::make_tuple(current_node->right,current_level+1));
    }

    std::vector<float> averages;
    for(int i=0;i<average_dict.size();i++){
        averages.push_back(std::get<0>(average_dict[i])/std::get<1>(average_dict[i]));
    }

//    reverse the vector
    std::reverse(averages.begin(),averages.end());


    return averages
}


int main(){
    return 0;
}