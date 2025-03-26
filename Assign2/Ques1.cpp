#include <iostream>
using namespace std;


void inputMatrix(int matrix[][100], int rows, int cols) {
cout << "Enter elements of matrix:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
cin >> matrix[i][j];
}}}


void displayMatrix(int matrix[][100], int rows, int cols) {
cout << "Matrix:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << matrix[i][j] << " ";
}
cout << endl;
}}


void addMatrices(int A[][100], int B[][100], int C[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
C[i][j] = A[i][j] + B[i][j];
}}}


void subtractMatrices(int A[][100], int B[][100], int C[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
C[i][j] = A[i][j] - B[i][j];
}}}


void multiplyMatrices(int A[][100], int B[][100], int C[][100], int rowsA, int colsA, int colsB) {
for (int i = 0; i < rowsA; ++i) {
for (int j = 0; j < colsB; ++j) {
C[i][j] = 0;
for (int k = 0; k < colsA; ++k) {
C[i][j] += A[i][k] * B[k][j];
}}}}


bool isUpperTriangular(int matrix[][100], int rows, int cols) {
for (int i = 1; i < rows; ++i) {
for (int j = 0; j < i && j < cols; ++j) {
if (matrix[i][j] != 0) {
return false;
}}}
return true;
}


bool isLowerTriangular(int matrix[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = i + 1; j < cols; ++j) {
if (matrix[i][j] != 0) {
return false;
}}}
return true;
}


void transposeMatrix(int matrix[][100], int transpose[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
transpose[j][i] = matrix[i][j];
}}}

bool isSymmetric(int matrix[][100], int rows, int cols) {
if (rows != cols)
return false;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
if (matrix[i][j] != matrix[j][i])
return false;
}}
return true;
}

void convertUpper(int matrix[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < i; ++j) {
matrix[i][j] = 0;
}}}

void convertLower(int matrix[][100], int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = i + 1; j < cols; ++j) {
matrix[i][j] = 0;
}
    }
}


int main() {
    int rows, cols;


cout << "Enter number of rows and columns of matrix: ";
cin >> rows >> cols;

int matrixA[100][100], matrixB[100][100], resultMatrix[100][100];


inputMatrix(matrixA, rows, cols);


displayMatrix(matrixA, rows, cols);


inputMatrix(matrixB, rows, cols);


displayMatrix(matrixB, rows, cols);


addMatrices(matrixA, matrixB, resultMatrix, rows, cols);
cout << "Result of addition:" << endl;
displayMatrix(resultMatrix, rows, cols);


subtractMatrices(matrixA, matrixB, resultMatrix, rows, cols);
cout << "Result of subtraction:" << endl;
displayMatrix(resultMatrix, rows, cols);


multiplyMatrices(matrixA, matrixB, resultMatrix, rows, cols, cols);
cout << "Result of multiplication:" << endl;
displayMatrix(resultMatrix, rows, cols);

if (isUpperTriangular(matrixA, rows, cols)) {
cout << "Matrix A is upper triangular." << endl;
} else {
cout << "Matrix A is not upper triangular." << endl;
}


if (isLowerTriangular(matrixA, rows, cols)) {
cout << "Matrix A is lower triangular." << endl;
} else {
cout << "Matrix A is not lower triangular." << endl;
}


int transposeMatrixA[100][100];
transposeMatrix(matrixA, transposeMatrixA, rows, cols);
cout << "Transpose of Matrix A:" << endl;
displayMatrix(transposeMatrixA, cols, rows);

if (isSymmetric(matrixA, rows, cols)) {
cout << "Matrix A is symmetric." << endl;
} else {
cout << "Matrix A is not symmetric." << endl;
}

convertUpper(matrixA, rows, cols);
cout << "Upper Triangular Matrix:" << endl;
displayMatrix(matrixA, rows, cols);

inputMatrix(matrixA, rows, cols); // Re-enter the matrix for lower triangular transformation
convertLower(matrixA, rows, cols);
cout << "Lower Triangular Matrix:" << endl;
displayMatrix(matrixA, rows, cols);

return 0;
}
