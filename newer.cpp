#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node();
    head = NULL;
    Node* one = new Node();
    one -> data = 4;
    Node* two = new Node();
    two -> data = 3;
    Node* three = new Node();
    three -> data = 2;

    head = one;
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    while(head!= NULL){
        cout << head -> data;
        head = head -> next;
    }

    // inserting a node at beggining

    Node* startNode = new Node();
    startNode -> data = 0;
    startNode -> next = one;
    head = startNode;
    cout << "\nLinked List after instertion of new node: \n";
    while(head!=NULL){
        cout << head->data << "--->";
        head = head->next;
    }

    // inserting a node at the end
    Node* endNode = new Node();
    endNode -> data = 4;
    three -> next = endNode;
    endNode -> next = NULL;
    head = startNode;
    cout << "\nAfter insertion of next node: \n";
    while(head!=NULL){
        cout << head -> data << "--->";
        head = head -> next;
    }

    //finding an element in linked list
    cout << "\nEnter the number you would like to find: ";
    int key;
    cin >> key;

    head = startNode;
    int n = 0;
    while (head!=NULL){
      if(head->data == key){
        n += 1;
    }
    head = head -> next;
    }
    cout << "\nThe number occurs in the list " << n << " time(s).";

    // sort elements of a linked list
    head = startNode;
    int temp;
    Node* second = new Node();
    while(head!=NULL){
        second = head -> next;
        while(second!=NULL){
            if(head->data > second->data){
                temp = second->data;
                second->data = head->data;
                head->data = temp;
            }
            second = second -> next;
        }
        head = head -> next;
    }
    head = startNode;
    cout << "\nThe list after sorting is: ";
    while(head!=NULL){
        cout << head -> data << "--->";
        head = head -> next;
    }
}