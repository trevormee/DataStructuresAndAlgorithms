#ifndef QUEUES_HPP
#define QUEUES_HPP

#include "Node.hpp"

class Queues 
{
    private:
        Node *front, *rear;

    public:
        // Creates a new node in the queue
        Node* newNode(int data);

        // Checks if queue is empty
        int isEmpty(Node* front);

        // adds an element to end of queue
        void Enqueue(Node** back, int data);

        // removes an element from front of queue
        int Dequeue(Node** front);

        // returns front element of queue
        int Peek(Node* front);

        // Travesre through queue
        void Traversal(Node* front);

        // Main loop to run Queue Operations
        void QueueMainLoop();
};
#endif