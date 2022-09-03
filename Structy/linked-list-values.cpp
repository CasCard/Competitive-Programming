//
// Created by abel_ on 03-09-2022.
//

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        string value;
        Node* next;

        Node(string value){
            this->value = value;
            this->next = nullptr;
        }
};

vector<string> linkedListValues(Node* head){
    vector<string> values;
    Node* current = head;
    while(current != nullptr){
        values.push_back(current->value);
        current = current -> next;
    }
    return values;
}

int main(){
    Node a("A");
    Node b("B");
    Node c("C");
    Node d("D");

    a.next = &b;
    b.next = &c;
    c.next = &d;

    vector<string> values = linkedListValues(&a);
    for(int i=0;i<values.size();i++){
        cout << values[i] << " ";
    }
    return 0;
}
