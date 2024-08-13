#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include <cstddef>
#include <array>

class Arrays
{

public:
    // Default Constructor
    Arrays() {}

    // Traversal
    template <typename T>
    void Traversal(T* arr, size_t size);

    // Insertion
    template <typename T>
    void InsertElement(T* arr, size_t size, int x, int pos);

    // Deletion
    template <typename T>
    int DeleteElement(T* arr, size_t size, int pos);

    // Search by index
    template <typename T>
    int FindElement(T* arr, size_t n, int key);

    // Main Loop to run array operations
    void ArraysMainLoop();
};
#endif