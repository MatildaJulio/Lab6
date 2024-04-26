#include <iostream>
int main() {
    int rows, cols;

    do {
        std::cout << "Enter the number of rows (not exceeding 3): ";
        std::cin >> rows;
    }while (rows <= 0 || rows > 3);

    do {
        std::cout << "Enter the number of columns (not exceeding 3): ";
        std::cin >> cols
    }while (cols <= 0 || cols > 3);

    double** dynamicArray = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];

    }
    for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        std::cout << "Enter value for the element [" << i << "][" << j << "]: ";
        std::cin >> dynamicArray[i][j];

    }    
    }
    std::cout << "Values of the 2D array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        std::cout << dynamicArray[i][j] << "";

    } 
    std::cout << std::endl;   
    }
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;
    return 0;
    
}