#include "Headers/Arrays.hpp"

template <typename T>
void Arrays::Traversal(T* arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

template <typename T>
void Arrays::InsertElement(T* arr, int n, int x, int pos)
{
    for(int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;
}

template <typename T>
int Arrays::DeleteElement(T* arr, size_t size, int pos)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == pos)
            break;
    }

    if(i < size)
    {
        size = size - 1;
        for(int j = i; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    return size;
}


template <typename T>
int Arrays::FindElement(T* arr, size_t size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
}

void Arrays::ArraysMainLoop()
{
    int array1[] = {1,2,3,4,5};
    size_t array1Size = sizeof(array1) / sizeof(array1[0]);

    std::cout << "Array Traversal..." << std::endl;
    Traversal(array1, array1Size);

    std::cout << "Insert an element..." << std::endl;
    InsertElement(array1, array1Size, 10, 3);

    std::cout << "New Array Traversal..." << std::endl;
    Traversal(array1, array1Size + 1);

    int element = FindElement(array1, array1Size, 2);
    std::cout << "Index with value the value 2: " << " at index " << element << std::endl;
    
    std::cout << "Before deletion..." << std::endl;
    for(int i = 0; i < array1Size; i++)
    {
        std::cout << array1[i] << " ";
    }

    int deleteElementAt = 3;    // Index 3
    std::cout << "\nAfter deletion..." << std::endl;
    array1Size = DeleteElement(array1, array1Size, deleteElementAt);
    for(int i = 0; i < array1Size; i++)
    {
        std::cout << array1[i] << " ";
    }

    std::cout << std::endl;
}