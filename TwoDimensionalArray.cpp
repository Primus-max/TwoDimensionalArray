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

#include <iostream>
#include <windows.h>
#include "array_utils.h"
using namespace std;


template <typename T>
T** CreateTwoDimArray(int rows, int cols);

template <typename T>
void PrintTwoDimArray(T** arr, int rows, int cols);


template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int rowsInt = 7;
	const int colsInt = 12;
    int **intArray = CreateTwoDimArray<int>(rowsInt, colsInt); // Создание двумерного массива целых чисел

    const int rowsChar = 12;
	const int colsChar = 30;
    char **charArray = CreateTwoDimArray<char>(rowsChar, colsChar); // Создание двумерного массива символов

    cout << "-------------------------Заполнение двумерного массива целыми числами-------------------------" << "\n\n";
    FillTwoDimArray<int>(intArray, rowsInt, colsInt);
	PrintTwoDimArray<int>(intArray, rowsInt, colsInt);

    cout << "\n\n";

    cout << "-------------------------Заполнение двумерного массива символами-------------------------" << "\n\n";
    FillTwoDimArray<char>(charArray, rowsChar, colsChar);
    PrintTwoDimArray<char>(charArray, rowsChar, colsChar);

    cout << "\n\n";
}

template <typename T>
void FillTwoDimArray(T** arr, int rows, int cols) {
    if (arr == nullptr) return;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (typeid(T) == typeid(int))
                arr[i][j] = rand() % 100; // Заполнения интовыми 
            if(typeid(T) == typeid(char))
                arr[i][j] = 33 + rand() % 94; // Заполнение печатными символами
        }

    }
}