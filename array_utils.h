
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H
#include "array_utils.cpp"

/// <summary>
/// ������� �������� ���������� �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
/// <returns>��������� �� ����� ������</returns>
template <typename T>
T** CreateTwoDimArray(int rows, int cols);


/// <summary>
/// ������� ������ ������� � �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- ������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
template <typename T>
void PrintTwoDimArray(T** arr, int rows, int cols);

/// <summary>
/// ������� ���������� ������� ����������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- ������ ��� ����������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols);

/// <summary>
/// ������� �������� ������ � ����� �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- �������� ������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
/// <returns>��������� �� ����� ������</returns>
template <typename T>
T** DeleteLastRow(T** arr, int& rows, int cols);


/// <summary>
/// ������� �������� ���������� ������� � �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- �������� ������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
/// <returns>��������� �� ����� ������</returns>
template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols);

/// <summary>
/// ������� ������� ������ �� ��������� �������
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- �������� ������</param>
/// <param name="rows">- ���-�� �����</param>
/// <param name="cols">- ���-�� ��������</param>
/// <param name="position">- ������� ��� �������</param>
/// <returns></returns>
template<typename T>
T** InsertRowByPosition(T** arr, int& rows, int cols, int position);

/// <summary>
/// ������� ������ (��������� ������)
/// </summary>
/// <typeparam name="T">- ���������������� ���</typeparam>
/// <param name="arr">- ������ ��� ��������</param>
/// <param name="rows">- ���-�� �����</param>
template <typename T>
void ClearMemory(T** arr, int rows);

#endif 