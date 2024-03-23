
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H
#include "array_utils.cpp"

/// <summary>
/// Функция создания двумерного массива
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
/// <returns>указатель на новый массив</returns>
template <typename T>
T** CreateTwoDimArray(int rows, int cols);


/// <summary>
/// Функция печати массива в консоль
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- массив</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
template <typename T>
void PrintTwoDimArray(T** arr, int rows, int cols);

/// <summary>
/// Функция заполнения массива значениями
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- массив для заполнения</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols);

/// <summary>
/// Функция удаления строки в конце массива
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- исходный массив</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
/// <returns>указатель на новый массив</returns>
template <typename T>
T** DeleteLastRow(T** arr, int& rows, int cols);


/// <summary>
/// Функция удаления последнего столбца в массиве
/// </summary>
/// <typeparam name="T">- пользовательский тип</typeparam>
/// <param name="arr">- исходный массив</param>
/// <param name="rows">- кол-во строк</param>
/// <param name="cols">- кол-во столбцов</param>
/// <returns>указатель на новый массив</returns>
template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols);

template <typename T>
void ClearMemory(T** arr, int rows);

#endif 