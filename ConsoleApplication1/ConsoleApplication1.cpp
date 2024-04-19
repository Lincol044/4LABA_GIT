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
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void copyArray(int*& dest, int*& source, int& destSize, int sourceSize) {
    delete[] dest;
    destSize = sourceSize;
    dest = new int[destSize];
    for (int i = 0; i < destSize; ++i) {
        dest[i] = source[i];
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(static_cast<unsigned int>(time(nullptr)));

    int size1, size2;
    cout << "Введите размер первого массива: ";
    cin >> size1;
    cout << "Введите размер второго массива: ";
    cin >> size2;

    int* array1 = nullptr, * array2 = nullptr;


    initArray(array1, size1);
    initArray(array2, size2);

    cout << "\n\n\n" << "Массивы до копирования:" << endl;
    cout << "[ 1 ] Массив:" << endl;
    printArray(array1, size1);
    cout << "[ 2 ] Массив:" << endl;
    printArray(array2, size2);


    copyArray(array1, array2, size1, size2);


    cout << "\n\n\n" << "Массивы после копирования:" << endl;
    cout << "[ 1 ] Массив:" << endl;
    printArray(array1, size1);
    cout << "[ 2 ] Массив:" << endl;
    printArray(array2, size2);

    delete[] array1;
    delete[] array2;

    return 0;
}
