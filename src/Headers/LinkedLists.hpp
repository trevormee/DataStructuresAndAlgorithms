#ifndef LINKEDLISTS_HPP
#define LINKED_LISTS_HPP

#include "Node.hpp"
#include <iostream>

class LinkedLists
{
    private:
        Node* head;

    public:
        // Constructor
        LinkedLists() : head(NULL) {}

        // Traversal
        void Traversal(Node* head);
        
        // Insert at beginning of list
        void InsertAtHead(int value);

        // Insertion
        void Insert(int value, int pos);

        // Delete head node
        void DeleteAtHead();

        // Deletion
        void Delete(int pos);

        // Search
        int SearchByValue(int value);

        // Main Loop to run Linked List operations
        void LinkedListsMainLoop();
        
};
#endif


