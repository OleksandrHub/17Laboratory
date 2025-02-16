#include <iostream>
#include "input.h"
#include <math.h>
using namespace std;


//Оголошення прототипів функцій
void min_number_abs(double *arr, int *n);
void sum_two_elements(double *arr, int *n);
void compress_array(double *arr, int *n);
// void input_elements(double *arr, int *n);

// 5, -12, 3, 18, -7, 0, 14, -3, 9, -19
int main(){
    setlocale(LC_ALL,"uk_UA");
    int n;
    cout << "Введіть кількість елементів ";
    cin >> n;
    double *array = new double[n];
    input_elements(array, &n);
    min_number_abs(array, &n);
    sum_two_elements(array, &n);
    compress_array(array, &n);
    delete [] array;
    return 0;
}
