#include "../../include/utils.h"

#include <iostream>

using namespace std;

void print(const string text) {
    cout << text << endl;
}

void input(int *i, string text) {
    if (!text.empty())
        print(text);

    cin >> *i;
}

void input(float *f, string text) {
    if (!text.empty())
        print(text);

    cin >> *f;
}

int binarySearch(const double array[], float target, int size) {
    int middle;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        middle = (left + right) / 2;

        if (array[middle] == target || (array[middle] == left && array[middle] == right))
            return middle;

        if (target > array[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}

float areaTrapeze(float B, float b, float h) {
    return (B + b) * h / 2;
}