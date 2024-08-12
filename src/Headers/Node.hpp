#ifndef NODE_HPP
#define NODE_HPP

class Node
{
    public:
        int data;
        Node* next;
        
        // Default Constructor
        Node() { data = 0; next = nullptr;};

        // Count Num Nodes 
        static int countNode(Node* head);

};
#endif