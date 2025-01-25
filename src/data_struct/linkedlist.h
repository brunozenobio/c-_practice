#ifndef LINKEDLIST
#define LINKEDLIST
#include <iostream>
using namespace std;

class Node{
    private:
        int value;
        Node* next;
    public:
        Node(int value){
            this->value=value;
            this->next=nullptr;
        }

        int getData() const {
            return this->value;
        }
        void setData(int value){
            this->value=value;
        }

        Node* getNext() const {
            return this->next;
        }
        void setNext(Node* next_node){
            this->next=next_node;
        }
};


class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            this->head = nullptr;
        }

        void insertAtEnd(int value){
            Node* new_node = new Node(value);

            if (head == nullptr){
                head = new_node;
                return;
            }
            Node* nodo_temporal = head;
            while(nodo_temporal->getNext()){
                nodo_temporal = nodo_temporal->getNext();
            } 
            nodo_temporal->setNext(new_node);
        }
        void insertAtBeginning(int value){
            Node* new_node = new Node(value);
            new_node->setNext(head);
            head = new_node;
        }
        void display(){
            Node* current_node = head;
            while(current_node != nullptr){
                cout << current_node->getData() << "->";
                current_node = current_node->getNext();
            }
            cout << "nullptr" << endl;

        }

};

#endif