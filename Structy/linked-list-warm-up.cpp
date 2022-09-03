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


//Iterative implementation
void printList(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}


//Recursive implementation
void printRecursiveList(Node* head){
    if(head == nullptr) return;
    cout << head->value << " ";
    printRecursiveList(head->next);
}

int main(){
    Node a("A");
    Node b("B");
    Node c("C");
    Node d("D");

    a.next = &b;
    b.next = &c;
    c.next = &d;

    cout << "Iterative implementation" << endl;
    printList(&a);
    cout << "Recursive implementation" << endl;
    printRecursiveList(&a);
    return 0;
}