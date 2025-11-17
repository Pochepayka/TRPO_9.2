#include "functions.h"

int sumArray(const int arr[]) {
    int sum = 0;
    int i = 0;

    while (arr[i] != 0) {
        sum += arr[i];
        i++;
    }
    return sum;
}

int minElement(const int arr[]) {
    int i = 0;
    int minVal = arr[0];

    while (arr[i] != 0) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        i++;
    }
    return minVal;
}

int maxElement(const int arr[]) {
    int i = 0;
    int maxVal = arr[0];

    while (arr[i] != 0) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        i++;
    }
    return maxVal;
}

int countLength(const int arr[]) {
    int length = 0;

    while (arr[length] != 0) {
        length++;
    }
    return length;
}

int countNegative(const int arr[]) {
    int count = 0;
    int i = 0;

    while (arr[i] != 0) {
        if (arr[i] < 0) {
            count++;
        }
        i++;
    }
    return count;
}