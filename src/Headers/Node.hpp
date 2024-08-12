#ifndef NODE_HPP
#define NODE_HPP

class Node
{
    public:
        int data;
        Node* next;
        
        // Parametrized Constructor
        Node(int newData) { data = newData; next = nullptr;};

};
#endif