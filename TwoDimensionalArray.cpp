// Для динамического двумерного массива написать шаблонные функции которые :
// - удаляют строку в конце массива
// - удаляют столбец в конце массива.
// - добавляют новую строку в указанную позицию
// - добавляют новый столбец в указанную позицию
// - удаляют строку в указанной позиции
// - удаляют столбец в начале массива.
// Реализовать использование данных функций для массива :
// -целых чисел 7 * 12
// - символов 12 * 30

#include "array_utils.h"
#include <iostream>
#include <windows.h>
using namespace std;


template <typename T>
T** CreateTwoDimArray(int rows, int cols);

template <typename T>
void PrintTwoDimArray(T** arr, int rows, int cols);

template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols);

template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols);

template <typename T>
void ClearMemory(T **arr, int rows);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rowsInt = 7;
	int colsInt = 12;
	int** intArray = CreateTwoDimArray<int>(rowsInt, colsInt); // Создание двумерного массива целых чисел

	int initialRows = 12;
	int initialCols = 30;
	int rowsChar = initialRows;
	int colsChar = initialCols;
	char** charArray = CreateTwoDimArray<char>(rowsChar, colsChar); // Создание двумерного массива символов

	cout << "-------------------------Заполнение двумерного массива целыми числами-------------------------" << "\n\n";
	FillTwoDimArray<int>(intArray, rowsInt, colsInt);
	PrintTwoDimArray<int>(intArray, rowsInt, colsInt);

	cout << "\n\n";

	cout << "-------------------------Заполнение двумерного массива символами-------------------------" << "\n\n";
	FillTwoDimArray<char>(charArray, rowsChar, colsChar);
	PrintTwoDimArray<char>(charArray, rowsChar, colsChar);

	cout << "\n\n";

	cout << "-------------------------Удаление последней строки из массива-------------------------" << "\n\n";
	char** charrArrauWidthLastEl = DeleteLastCol(charArray, rowsChar, colsChar);
	PrintTwoDimArray<char>(charrArrauWidthLastEl, rowsChar, colsChar);
}

template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols) {
	if (arr == nullptr) return nullptr;

	T** newArray = CreateTwoDimArray<T>(rows, --cols);
	if (newArray == nullptr) return nullptr;

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			newArray[i][j] = arr[i][j];
		}
	}

	//ClearMemory(arr, rows);
	return newArray;
}


template <typename T>
void ClearMemory(T** arr, int rows) {
	if (arr == nullptr) return;
	for (int i = 0; i < rows; i++)
		delete[] arr[i];

	delete[] arr;
}