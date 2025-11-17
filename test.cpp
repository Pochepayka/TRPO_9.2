#include <cassert>
#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int arr1[] = {3, 2, 1, 4, 0};
    int arr2[] = {-5, -1, -9, 0};
    int arr3[] = {10, 20, 30, 40, 50, 0};

    cout << "Start of testing..." << endl;
    assert(sumArray(arr1) == 10);
    assert(sumArray(arr2) == -15);
    assert(sumArray(arr3) == 150);

    assert(minElement(arr1) == 1);
    assert(minElement(arr2) == -9);
    assert(minElement(arr3) == 10);

    assert(countLength(arr1) == 4);
    assert(countLength(arr2) == 3);
    assert(countLength(arr3) == 5);

    cout << "All tests passed." << endl;

    return 0;
}