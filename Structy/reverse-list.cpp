//
// Created by abel_ on 08-09-2022.
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



Node* reverseList(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

//Node* reverseList(Node* head){
//    Node* prev = nullptr;
//    Node* current = head;
//
//    while(current != nullptr){
//        Node* next = current->next;
//        current->next = prev;
//        prev = current;
//        current = next;
//    }
//    return prev;
//}

int main(){
    Node a("A");
    Node b("B");
    Node c("C");
    Node d("D");
    Node e("E");
    Node f("F");

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    Node* head = reverseList(&a);
    while (head != nullptr){
        cout << head->value << " ";
        head = head->next;
    }

    return 0;
}

