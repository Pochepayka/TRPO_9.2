#include <iostream>
#include "functions.h"
#include "locale.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int arr[] = {3, -2, 7, 5, -1, 4, 0}; // 0 - конец массива

    cout << "Длина массива: " << countLength(arr) << endl;
    cout << "Сумма массива: " << sumArray(arr) << endl;
    cout << "Минимальный элемент массива: " << minElement(arr) << endl;
    cout << "Максимальный элемент массива: " << maxElement(arr) << endl;
    cout << "Количество отрицательных элементов: " << countNegative(arr) << endl;

    return 0;
}