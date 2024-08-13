#include "Headers/Queues.hpp"

/*
    @brief Creates a new node in the queue
    @param data: value the new node will hold
*/
Node* Queues::newNode(int data)
{
    Node* node = new Node(data);
    node->data = data;
    node->next = NULL;
    return node;
}


/*
    @brief Checks if queue is empty
    @param front: first node in queue
    @returns 0 if empty, 1 if not empty
*/
int Queues::isEmpty(Node* front)
{
    return !front;
}


/*
    @brief adds an element to the end of a queue
    @param back: pointer to the last element in the queue's pointer
*/
void Queues::Enqueue(Node **back, int data)
{
    Node* newRear = newNode(data);

    if (*back == nullptr) {
        *back = newRear;  
        front = newRear;  
    } else {
        (*back)->next = newRear;  
        *back = newRear;          
    }
    rear = newRear;
}

/*
    @brief deletes an element to the front of a queue
    @param back: pointer to the last element in the queue's pointer
*/
int Queues::Dequeue(Node** front)
{
    if(*front == nullptr)    // queue is empty
    {
        std::cout << "Queue is empty!" << std::endl;
        return -1; 
    }

    Node* temp = *front;
    *front = (*front) -> next;
    int dequeued = temp->data;
    free(temp);

    return dequeued;
}

/*
    @brief Returns node at front of queue
    @param front: first element in queue
    @returns first element in queue
*/
int Queues::Peek(Node* front)
{
    if(isEmpty(front))
    {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }

    Node* temp = front;
    int peeked = temp->data;

    return peeked;
}

/*
    @brief Traverses through queue and prints out node data
    @parma front: first element in queue
*/
void Queues::Traversal(Node* front)
{
    while(front != nullptr)
    {
        std::cout << front->data << " ";
        front = front -> next;
    }

    std::cout << std::endl;
}

/*
    @brief Sample program to test and display how various 
           Queue operations work
*/
void Queues::QueueMainLoop()
{
    std::cout << "\n------------------------------------------" <<std::endl;
    std::cout << "Starting Queue Operations:" << std::endl;

    Node* front = nullptr;
    Node* rear = nullptr;

    std::cout << "Adding new elements into queue..." << std::endl;
    Enqueue(&rear, 1);
    front = rear;
    Enqueue(&rear, 2);
    Enqueue(&rear, 3);
    Enqueue(&rear, 4);

    std::cout << "Traversing through queue..." << std::endl;
    Traversal(front);

    Dequeue(&front);
    std::cout << "Traversing through queue after dequeue..." << std::endl;
    Traversal(front);

    std::cout << "Peeking first element in queue..." << std::endl;
    int peeked = Peek(front);
    std::cout << "First node in queue is " << peeked << std::endl;

    std::cout << "End Queue operations" << std::endl;
    std::cout << "------------------------------------------" <<std::endl;
}