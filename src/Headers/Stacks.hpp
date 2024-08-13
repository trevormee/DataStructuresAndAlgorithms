#ifndef STACKS_HPP
#define STACKS_HPP

#include "Node.hpp"

class Stacks
{
    private:
        Node* root;

    public:
        // Creates a new node in the stack
        Node* newNode(int data);

        // Checks if stack is empty
        int isEmpty(Node* root);

        // Adds element to top of stack
        void Push(Node** root, int data);

        // Deltes top element in stack
        int Pop(Node** root);

        // Returns top element of stack
        int Peek(Node* root);

        // Traverse through stack
        void Traversal(Node* root);

        // Main Loop to run Stack operations
        void StackMainLoop();

};
#endif