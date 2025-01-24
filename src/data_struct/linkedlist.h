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

        int get_data() const {
            return this->value;
        }
        void set_data(int value){
            this->value=value;
        }

        Node* get_next() const {
            return this->next;
        }
        void set_next(Node* next_node){
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
            while(nodo_temporal->get_next()){
                nodo_temporal = nodo_temporal->get_next();
            } 
            nodo_temporal->set_next(new_node);
        }
        void insertAtBeginning(int value){
            Node* new_node = new Node(value);
            new_node->set_next(head);
            head = new_node;

        }


};

#endif