#include "Headers/Arrays.hpp"
#include "Arrays.cpp"
#include "LinkedLists.cpp"
#include "Stacks.cpp"
#include "Queues.cpp"
#include "BinarySearchTree.cpp"

int main()
{
    Arrays a;
    a.ArraysMainLoop();

    LinkedLists ll;
    ll.LinkedListsMainLoop();

    Stacks s;
    s.StackMainLoop();

    Queues q;
    q.QueueMainLoop();

    BinarySearchTree bst;
    bst.BSTMainLoop();

    return 0;
}