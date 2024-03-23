#include <iostream>
using namespace std;

template <typename T>
void ClearMemory(T** arr, int rows) {
    if (arr == nullptr) return;
    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
}

template <typename T>
T** CreateTwoDimArray(int rows, int cols) {
    T** newArray = new T * [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new T[cols];
    }

    return newArray;
}

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

template <typename T>
T** DeleteLastRow(T** arr, int& rows, int cols) {
    if (arr == nullptr || rows == 0) return nullptr;
            
    T** newArray = CreateTwoDimArray<T>(--rows, cols);
    if (newArray == nullptr) return nullptr;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArray[i][j] = arr[i][j];
        }
    }

    ClearMemory(arr, rows + 1);
    return newArray;
}

template <typename T>
T** DeleteLastCol(T** arr, int rows, int& cols) {
    if (arr == nullptr || cols == 0) return nullptr;

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

template<typename T>
T** InsertRowByPosition(T** arr, int& rows, int cols, int position) {
    if (arr == nullptr || position < 0 || position >> rows)
        return nullptr;

    T** newArray = CreateTwoDimArray<T>(++rows, cols);
    if (newArray == nullptr) return nullptr;

    // Заполняю часть до позиции старыми значениями
    for (int i = 0; i < position; i++){
        for (int j = 0; j < cols; j++)
            newArray[i][j] = arr[i][j];
    }
    // Заполняю новую строку просто пустыми значениями
    for (int i = 0; i < cols; i++)
        newArray[position][i] = 33;

    // Заполняю вторую часть оставшимися значениями
    for (int i = position; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++)
            newArray[i + 1][j] = arr[i][j];
    }

    ClearMemory(arr, rows - 1);
    return newArray;
}