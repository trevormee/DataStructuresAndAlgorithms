#include "Headers/LinkedLists.hpp"

/*
    @brief Traverses through a linked list and output the data 
           at each position

    @param head: node
*/
void LinkedLists::Traversal(Node* head)
{
     while (head != nullptr)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

/*
    @brief Inserts a new node at beginning of linked list

    @param value: data to be assoc. with new head node
*/
void LinkedLists::InsertAtHead(int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

/*
    @brief Inserts a new node at a desired position

    @param value: data of the new node
    @param pos: index to insert the new node
*/
void LinkedLists::Insert(int value, int pos)
{
    if(pos < 1)
        std::cout << "Position must be >= 1" << std::endl;

    if(pos == 1)
        InsertAtHead(value);

    Node* newNode = new Node(value);
    newNode -> data = value;

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp; ++i)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

/*
    @brief Deletes the head node from a linked list
*/
void LinkedLists::DeleteAtHead()
{
    if(!head){
        std::cout << "List is empty" << std::endl;
    }

    Node* temp = head;
    head = head -> next;
    delete temp;
}

/*
    @brief Delets a node from a linked list at a desired index

    @param pos: index of the node to be deleted
*/
void LinkedLists::Delete(int pos)
{
    if(pos < 1)
        std::cout << "Position must be >= 1" << std::endl;

    if(pos == 1)
        DeleteAtHead();

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp; ++i)
    {
        temp = temp->next;
    }

    if (!temp || !temp->next) 
            std::cout << "Position out of range." << std::endl;

    Node* deletedNode = temp->next;
    temp->next = temp->next->next;

    delete deletedNode;
}

/*
    @brief Searches through a linked list

    @param value: data of the node we are searching for

    @returns position (index of node)
*/
int LinkedLists::SearchByValue(int value)
{
    Node* temp = head;
    int position = 1;

   while (temp != nullptr) 
    {
        if (temp->data == value)
            return position;

        temp = temp->next;
        position++;
    }

    return -1;

}

/*
    @brief Sample program to test and display how various 
           linked list operations work
*/
void LinkedLists::LinkedListsMainLoop()
{
    std::cout << "\n------------------------------------------" <<std::endl;
    std::cout << "Starting Linked List Operations:" << std::endl;

    head = new Node(4);
    Node *nodeB = new Node(2);
    Node *nodeC = new Node(3);
    Node *nodeD = new Node(10);
    Node *nodeE = new Node(20);

    head -> next = nodeB;
    nodeB -> next = nodeC;
    nodeC -> next = nodeD;
    nodeD -> next = nodeE;

    std::cout << "Traversing linked list..." << std::endl;
    Traversal(head);
    
    std::cout << "Inserting a new node at the beginning of linked list..." << std::endl;
    InsertAtHead(100);
    Traversal(head);

    int index = 4;
    int newValue = 25;
    std::cout << "Inserting a new node at position" << index << " with value of " << newValue << " ..." << std::endl;
    Insert(newValue, index);
    Traversal(head);

    std::cout << "Deleting head node..." << std::endl;
    DeleteAtHead();
    Traversal(head);

    int indexToDelete = 3;
    std::cout << "Deleting node at index " << indexToDelete << " ..." << std::endl;
    Delete(indexToDelete);
    Traversal(head);

    int searchValue = 10;
    std::cout << "Searching for index with value of " << searchValue << " ..." << std::endl;
    int searchIndex = SearchByValue(searchValue);
    std::cout << "Found " << searchValue << " at index" << searchIndex << std::endl;
    Traversal(head);

    Node* current = head;
    while (current != nullptr)
    {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    std::cout << "Linked list memory has been freed." << std::endl;
    std::cout << "End linked list operations" << std::endl;
    std::cout << "------------------------------------------" <<std::endl;
}