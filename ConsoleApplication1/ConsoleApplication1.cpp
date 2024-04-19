#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void initArray(int*& arr, int size) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
}


void printArray(const int* arr, int size) {
   
void copyArray(int*& dest, int*& source, int& destSize, int sourceSize) {
    delete[] dest;
    destSize = sourceSize;
    dest = new int[destSize];
    for (int i = 0; i < destSize; ++i) {
        dest[i] = source[i];
    }
}

int main() {
     
}
