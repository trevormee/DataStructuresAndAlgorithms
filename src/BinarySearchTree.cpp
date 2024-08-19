#include "Headers/BinarySearchTree.hpp"

/*
    @brief inserts a new node into a BST 
    @param node: node to be inserted into tree
    @param key: 

    @returns new node to be inserted
*/
BSTNode* BinarySearchTree::Insert(BSTNode* node, int key)
{
    if(node == NULL)
        return new BSTNode(key);

    if(node -> key == key)
    {
        std::cout << "Node already exsists in tree!" << std::endl;
        return node;
    }

    if( node -> key < key)  // Move to left
    {
        node -> left = Insert(node -> left, key);
    }
    else    // Move to right
    {
        node -> right = Insert(node -> right, key);
    }

    return node;

}


BSTNode* BinarySearchTree::Search(BSTNode* root, int val)
{
    while(root != nullptr)
    {
        if(root -> key == val){
            return root;
        }else if (root -> key < val)
        {
            root = root -> right;
        }else{
            root = root -> left;
        }
    }
    
    return nullptr; // node DNE in BST
}

/*
    @brief Deletes a node from the BST
    @param node: node to be deleted 
    @param key: value of node to be deleted

    @returns deleted node
*/
void BinarySearchTree::Delete(BSTNode* node, int val)
{ 
    /*
    if(node == NULL)
        return node;

    if(node -> key > val)   // move left
        node -> left = Delete(node -> left, val);
    else if(node -> key < val)  // move right
        node -> right = Delete(node -> right, val);
    else{   // key matches value

        // Case 1: Deleting a leaf node (no children)
        if(node -> left && node -> right == NULL)
        {
            delete node;
        }

        // Case 2: Single Child Node
        if(node -> left != NULL && node -> right == NULL)
        {
            
        }

    }
    */
}
        
/* 
    @brief Traversal (in order)
    @param node: current node
*/
void BinarySearchTree::InOrderTraversal(BSTNode* node)
{
    if(node == NULL)
        return;

    InOrderTraversal(node-> left);
    std::cout << node -> key << " ";
    InOrderTraversal(node-> right);
}

/* 
    @brief Traversal (pre order)
    @param node: current node
*/
void BinarySearchTree::PreOrderTraversal(BSTNode* node)
{
    if(node == NULL)
        return;     // BST is empty

    std::cout << node -> key << " ";
    PreOrderTraversal(node -> left);
    PreOrderTraversal(node -> right);
}

/* 
    @brief Traversal (post order)
    @param node: current node
*/
void BinarySearchTree::PostOrderTraversal(BSTNode* node)
{
    if(node == NULL)
        return;

    PostOrderTraversal(node -> left);
    PostOrderTraversal(node -> right);
    std::cout << node -> key <<  " ";
}

/*
    @brief Main loop to test and display BST operations
*/
void BinarySearchTree::BSTMainLoop()
{
    std::cout << "\n------------------------------------------" <<std::endl;
    std::cout << "Starting BST Operations:" << std::endl;

    BSTNode* root = new BSTNode(100);
    root -> left = new BSTNode(20);
    root -> right = new BSTNode(200);
    root -> left -> left = new BSTNode(10);
    root -> left -> right = new BSTNode(30);
    root -> right -> left = new BSTNode(150);
    root -> right -> right = new BSTNode(300);

    std::cout << "In order traversal..." << std::endl;
    InOrderTraversal(root);

    std::cout << "\nPre order traversal..." << std::endl;
    PreOrderTraversal(root);

    std::cout << "\nPost order traversal..." << std::endl;
    PostOrderTraversal(root);

    int searchKey = 150;
    BSTNode* searchResult = Search(root, searchKey);
    if (searchResult != nullptr) {
        std::cout << "\nNode with key " << searchKey << " found in the BST." << std::endl;
    } else {
        std::cout << "\nNode with key " << searchKey << " not found in the BST." << std::endl;
    }

    Delete(root, searchKey);

    std::cout << "In order traversal after deletion..." << std::endl;
    InOrderTraversal(root);
    
    std::cout << "\nEnd BST operations" << std::endl;
    std::cout << "------------------------------------------" <<std::endl;
}