#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* temp = new Node();
    temp -> data = data;
    return temp;
}

int main(){

    Node* head = new Node();
    head -> next= nullptr;
    Node* one = newNode(1);
    Node* two = newNode(2);
    Node* three = newNode(3);

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = nullptr;
    // Accessing data
    Node* temp = head;
    while (temp!=NULL){
        cout << temp -> data;
        temp = temp -> next;
    }

    // Inserting a node at beginning
    Node* startNode = newNode(0);
    startNode -> next = head;
    head = startNode;
    temp = head;
    cout << "\nLinked list after insertion of new node is: ";
    while (temp!=NULL){
        cout << temp -> data;
        temp = temp -> next;
    }

    // Inserting a node at the end
    Node* endNode = newNode(4);
    temp = head;
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = endNode;

    temp = head;
    cout << "\nLinked list after insertion of new node is: ";
    while (temp!=NULL){
        cout << temp -> data;
        temp = temp -> next;
    }
    return 0;
}