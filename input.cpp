#include "input.h"
#include <iostream>
using namespace std;

// Реалізація функції
void input_elements(double *arr, int *n) {
    for (int i = 0; i < *n; i++) {
        cout << "Елемент " << i << ": ";
        cin >> *(arr + i);
    }
}
