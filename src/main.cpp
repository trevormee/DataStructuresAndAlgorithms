#include "Headers/Arrays.hpp"
#include "Arrays.cpp"
#include "LinkedLists.cpp"
#include "Stacks.cpp"
#include "Queues.cpp"

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

    return 0;
}