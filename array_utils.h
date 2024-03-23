
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <iostream>
#include <windows.h>
using namespace std;

template <typename T>
void ClearMemory(T** arr, int rows) {
    if (arr == nullptr) return;
    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
}

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
    if (arr == nullptr) {
        cout << "Не допустимый указатель на массив";
        return;
    }

    for (int i = 0; i < rows; i++) {
        cout << "[ ";

        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }

        cout << " ]" << endl;
    }
}

/// <summary>
/// Функция заполнения массива значениями
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- массив для заполнения</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols) {
    if (arr == nullptr) return;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (typeid(T) == typeid(int))
                arr[i][j] = rand() % 100; // Заполнения интовыми 
            if (typeid(T) == typeid(char))
                arr[i][j] = 33 + rand() % 94; // Заполнение печатными символами
        }

    }
}

/// <summary>
/// Функция удаления последнего столбца в массиве
/// </summary>
/// <typeparam name="T">- пользовательский тие</typeparam>
/// <param name="arr">- исходный массив</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
/// <returns>указатель на новый массив</returns>
template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols) {
    if (arr == nullptr) return nullptr;

    T** newArray = CreateTwoDimArray<T>(rows, --cols);
    if (newArray == nullptr) return nullptr;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArray[i][j] = arr[i][j];
        }
    }

    ClearMemory(arr, rows);
    return newArray;
}

#endif 