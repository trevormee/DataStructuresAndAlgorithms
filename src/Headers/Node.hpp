#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node
{
    public:
        int data;
        Node* next;
        
        // Parametrized Constructor
        Node(int newData) { data = newData; next = nullptr;};

};
#endif