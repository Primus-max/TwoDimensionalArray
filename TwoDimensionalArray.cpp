// Для динамического двумерного массива написать шаблонные функции которые :
// - удаляют строку в конце массива [x]
// - удаляют столбец в конце массива. [x]
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


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int initialIntRows = 7;
	const int initialIntCols = 12;
	int rowsInt = initialIntRows;
	int colsInt = initialIntCols;
	int** intArray = CreateTwoDimArray<int>(rowsInt, colsInt); // Создание двумерного массива целых чисел

	const int initialCharRows = 12;
	const int initialCharCols = 30;
	int rowsChar = initialCharRows;
	int colsChar = initialCharCols;
	char** charArray = CreateTwoDimArray<char>(rowsChar, colsChar); // Создание двумерного массива символов

	cout << "-------------------------Заполнение двумерного массива целыми числами-------------------------" << "\n\n";
	FillTwoDimArray<int>(intArray, rowsInt, colsInt);
	PrintTwoDimArray<int>(intArray, rowsInt, colsInt);

	cout << "\n\n";

	cout << "-------------------------Заполнение двумерного массива символами-------------------------" << "\n\n";
	FillTwoDimArray<char>(charArray, rowsChar, colsChar);
	PrintTwoDimArray<char>(charArray, rowsChar, colsChar);

	cout << "\n\n";

	cout << "-------------------------Удаление последней строки в массиве с числами-------------------------" << "\n\n";
	int** intArrayWithoutLastRow = DeleteLastRow(intArray, rowsInt, colsInt);
	PrintTwoDimArray<int>(intArrayWithoutLastRow, rowsInt, colsInt);

	cout << "\n\n";

	cout << "-------------------------Удаление последней строки в массиве с символами-------------------------" << "\n\n";
	char** charArrayWithoutLastRow = DeleteLastRow(charArray, rowsChar, colsChar);
	PrintTwoDimArray<char>(charArrayWithoutLastRow, rowsChar, colsChar);

	cout << "\n\n";



	cout << "-------------------------Удаление последнего столбца из массива чисел-------------------------" << "\n\n";
	int** intArrayWithLastCol = DeleteLastCol(intArrayWithoutLastRow, rowsInt, colsInt);
	PrintTwoDimArray<int>(intArrayWithLastCol, rowsInt, colsInt);

	cout << "\n\n";

	cout << "-------------------------Удаление последнего столбца из массива символов-------------------------" << "\n\n";
	char** charrArrayWithoutLastEl = DeleteLastCol(charArrayWithoutLastRow, rowsChar, colsChar);
	PrintTwoDimArray<char>(charrArrayWithoutLastEl, rowsChar, colsChar);




	cout << "-------------------------Вставка новой строки по указанной позиции в масcиве чисел-------------------------" << "\n\n";
	int** intArrayWithNewRowByPos = InsertRowByPosition(intArrayWithLastCol, rowsInt, colsInt, 3);
	PrintTwoDimArray<int>(intArrayWithNewRowByPos, rowsInt, colsInt);

	cout << "-------------------------Вставка новой строки по указанной позиции в масcиве чисел-------------------------" << "\n\n";
	char** charrArrayWithNewRowByPos = InsertRowByPosition(charrArrayWithoutLastEl, rowsChar, colsChar, 4);
	PrintTwoDimArray<char>(charrArrayWithNewRowByPos, rowsChar, colsChar);
}


