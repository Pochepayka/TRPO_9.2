#include <iostream>
#include "functions.h"

using namespace std;

int main() {

    int arr[] = {3, -2, 7, 5, -1, 4, 0}; // 0 - конец массива

    cout << "Длина массива: " << countLength(arr) << endl;
    cout << "Сумма массива: " << sumArray(arr) << endl;
    cout << "Минимальный элемент массива: " << minElement(arr) << endl;

    return 0;
}