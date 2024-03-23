
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <iostream>
#include <windows.h>
using namespace std;

/// <summary>
/// ������� �������� ���������� �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
/// <returns>��������� �� ����� ������</returns>
template <typename T>
T** CreateTwoDimArray(int rows, int cols) {
    T** newArray = new T * [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new T[cols];
    }

    return newArray;
}

/// <summary>
/// ������� ������ ������� � �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- ������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
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