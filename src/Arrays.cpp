#include "Headers/Arrays.hpp"

/*
    @brief iterates through an array and outputs the data
           of each index

    @param arr: array to iterate over
    @param size: size of the array
*/
template <typename T>
void Arrays::Traversal(T* arr, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

/*
    @brief inserts a new element into an array at desired position

    @param arr: array to iterate over
    @param size: size of the array
    @param x: value to be inserted into the array
    @param pos: index of where to insert new element
*/
template <typename T>
void Arrays::InsertElement(T* arr, size_t size, int x, int pos)
{
    for(int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;
}

/*
    @brief Deletes an element from a given array

    @param arr: array to iterate over
    @param size: size of the array
    @param pos: index of where to insert new element
*/
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

/*
    @brief finds an element in an array based on an elements value

    @param arr: array to iterate over
    @param size: size of the array
    @param key: value to match in the given array

    @returns index of array with matching key pair
*/
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

/*
    @brief Sample program to test and display how various 
           array operations work
*/
void Arrays::ArraysMainLoop()
{
    std::cout << "------------------------------------------" <<std::endl;
    std::cout << "Starting Array Operations:" << std::endl;

    int array1[] = {1,2,3,4,5};
    size_t array1Size = sizeof(array1) / sizeof(array1[0]);

    std::cout << "Array Traversal..." << std::endl;
    Traversal(array1, array1Size);

    std::cout << "Insert an element..." << std::endl;
    InsertElement(array1, array1Size, 10, 3);

    std::cout << "New Array Traversal..." << std::endl;
    Traversal(array1, array1Size + 1);

    int key = 2;
    int element = FindElement(array1, array1Size, key);
    std::cout << "Found the value " << key << " at index " << element << std::endl;
    
    std::cout << "Before deletion..." << std::endl;
    for(int i = 0; i < array1Size; i++)
    {
        std::cout << array1[i] << " ";
    }

    int deleteElementAt = 3; 
    std::cout << "\nAfter deletion..." << std::endl;
    array1Size = DeleteElement(array1, array1Size, deleteElementAt);

    for(int i = 0; i < array1Size; i++)
    {
        std::cout << array1[i] << " ";
    }

     std::cout << "\nEnd array operations" << std::endl;
     std::cout << "------------------------------------------" <<std::endl;
     
}