#include "Headers/Stacks.hpp"

/*
    @brief Creates a new node in the stack
    @param data: value the new node will hold
*/
Node* Stacks::newNode(int data)
{
    Node* node = new Node(data);
    node->data = data;
    node->next = NULL;
    return node;
}


/*
    @brief Checks if stacks is empty
    @param root: root node
    @returns 0 if empty, 1 if not empty
*/
int Stacks::isEmpty(Node* root)
{
    return !root;
}


/*
    @brief adds a new element to top of stack
    @param root: pointer to the root pointer
    @param data: value assoc. with new node
*/
void Stacks::Push(Node** root, int data)
{
    Node* newRoot = newNode(data);
    newRoot -> next = *root;
    *root = newRoot;
    std::cout << data << " added to stack" << std::endl;
}

/*
    @brief removes first element from stack
    @param root: pointer to the root pointer
    @returns removed node
*/
int Stacks::Pop(Node** root)
{
    if(isEmpty(*root))
    {
        std::cout << "Stack is empty!" << std::endl;
        return -1;
    }

    Node* temp = *root;
    *root = (*root) -> next;
    int popped = temp->data;
    free(temp);

    return popped;
}

/*
    @brief Grabs first node in stack
    @param root: root node
*/
int Stacks::Peek(Node* root)
{
    if(isEmpty(root))
    {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }

    Node* temp = root;
    int peeked = temp->data;

    return peeked;
}

/*
    @brief traverses through a stack and prints out its members
    @parma root: root node
*/
void Stacks::Traversal(Node* root)
{
    while(root != nullptr)
    {
        std::cout << root->data << " ";
        root = root->next;
    }

    std::cout << std::endl;
}

void Stacks::StackMainLoop()
{
    std::cout << "\n------------------------------------------" <<std::endl;
    std::cout << "Starting Stack Operations:" << std::endl;

    Node* root = NULL;
    std::cout << "Pusing new elements into stack..." << std::endl;
    Push(&root, 1);
    Push(&root, 2);
    Push(&root, 3);

    std::cout << "Traversing through stack..." << std::endl;
    Traversal(root);

    std::cout << "Popping first element from stack..." << std::endl;
    Pop(&root);
    std::cout << "Traversal after popping..." << std::endl;
    Traversal(root);

    std::cout << "Peeking first element in stack..." << std::endl;
    int peeked = Peek(root);
    std::cout << "First node in stack is " << peeked << std::endl;

    Node* current = root;
    while (current != nullptr)
    {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    std::cout << "End Stack operations" << std::endl;
    std::cout << "------------------------------------------" <<std::endl;
}