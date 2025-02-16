#include "mainfunc.h"
#include <iostream>
#include <math.h>
/* Функція: Стиснути масив, видаливши з нього всі елементи, величина яких знаходиться в інтервалі
[а, b]. Елементи, що звільнилися в кінці масиву, заповнити нулями.*/
void compress_array(double *arr, int *n){
    double a,b;
    int writeIndex = 0;
    cout << "Межа a ";cin >> a;
    cout << "Межа b ";cin >> b;
    for (int i = 0; i < *n; i++){
        if ( *(arr + i) >= a and *(arr + i) <= b ){
            *(arr + i) = a;
        }
        if ( *(arr + i) != a ){
            *(arr + writeIndex++) = *(arr + i);
        }
    }
    for (int i = writeIndex; i < *n; i++) {
        *(arr + i) = 0;
    }
    for (int i = 0; i < *n; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Функція: суму модулів елементів масиву, розташованих після першого від'ємного елемента.
void sum_two_elements(double *arr, int *n){
    double suma = 0;
    for(int i = 0; i < (*n-2); i++){
        if (*(arr + i) < 0){
            suma += fabs(*(arr + i + 1)) + fabs(*(arr + i + 2));
            break;
        }
    }
    cout << "Сума " << suma << endl;
}
// Функція: номер мінімального за модулем елемента масиву
void min_number_abs(double *arr, int *n){
    double min_el{fabs(arr[0])};
    int min_number{0};
    for (int i = 0; i < *n; i++){
        if (min_el > fabs(*(arr + i))){
            min_el =  fabs(*(arr + i));
            min_number = i;
        }
    }
    cout << "Номер мінімального " << min_number << endl;
}