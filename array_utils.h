
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <iostream>
#include <windows.h>
using namespace std;

/// <summary>
/// Функция создания двумерного массива
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
/// <returns>указатель на новый массив</returns>
template <typename T>
T** CreateTwoDimArray(int rows, int cols) {
    T** newArray = new T * [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new T[cols];
    }

    return newArray;
}

/// <summary>
/// Функция печати массива в консоль
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- массив</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
template <typename T>
void PrintTwoDimArray(T** arr, int rows, int cols) {
    if (arr == nullptr) return;

    for (int i = 0; i < rows; i++) {
        cout << "[ ";

        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }

        cout << " ]" << endl;
    }
}


#endif 