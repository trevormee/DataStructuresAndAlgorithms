#ifndef BINARYSEARCHTREE_HPP
#define BINARYSEARCHTREE_HPP

#include <iostream>

struct BSTNode
{
    int key;
    BSTNode* left; 
    BSTNode* right;
    BSTNode(int _key) {key = _key; left = right = NULL;}
};

class BinarySearchTree
{   
    public:
        // Insertion
        BSTNode* Insert(BSTNode* node, int key);

        // Searching
        BSTNode* Search(BSTNode* root, int key);

        // Deletion
        BSTNode* Delete(BSTNode* node, int key);

        // Traversal (in order)
        void InOrderTraversal(BSTNode* node);

        // Traversal (pre order)
        void PreOrderTraversal(BSTNode* node);

        // Traversal (post order)
        void PostOrderTraversal(BSTNode* node);

        // Main loop to run BST operations
        void BSTMainLoop();

};
#endif
