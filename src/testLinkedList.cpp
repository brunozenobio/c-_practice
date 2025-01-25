#include <iostream>
#include "data_struct/linkedlist.h"
using namespace std;

int main(){

    LinkedList* linkedlist = new LinkedList();
    linkedlist->insertAtBeginning(1);

    linkedlist->display();
    linkedlist->insertAtEnd(2);
    linkedlist->display();
    linkedlist->insertAtEnd(3);
    linkedlist->display();
    linkedlist->insertAtEnd(4);

    


    return 0;
}