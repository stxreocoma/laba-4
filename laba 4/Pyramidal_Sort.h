#pragma once
#include "Pyramidal_Sort.cpp"

void swap(int& a, int& b);
void heapify(int arr[], int n, int i);
template <typename T> void Pyramidal_Sort(T arr[], int n);