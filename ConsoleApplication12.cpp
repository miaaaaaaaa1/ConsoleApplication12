#include <iostream>
using namespace std;

int main() {
    //1
    const int size = 5;
    int source[size] = { 1, 2, 3, 4, 5 };
    int destination[size];

    int* srcPtr = source;
    int* destPtr = destination;

    for (int i = 0; i < size; ++i) {
        *(destPtr + i) = *(srcPtr + i);
    }

    cout << "Copied array: ";
    for (int i = 0; i < size; ++i) {
        cout << destination[i] << " ";
    }

    //2
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Array after reverse: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    //3
    const int size = 5;
    int source[size] = { 1, 2, 3, 4, 5 };
    int destination[size];

    int* srcPtr = source;
    int* destPtr = destination + size - 1;

    for (int i = 0; i < size; ++i) {
        *destPtr-- = *srcPtr++;
    }

    cout << "Array after copying in reverse order: ";
    for (int i = 0; i < size; ++i) {
        cout << destination[i] << " ";
    }
}
