#include <iostream>

using namespace std;

int main(){
    int row, column;
    char char_row, char_column;
    cout << "Enter Row and Column: ";
    char **ptr_matrix = new char*[row];
    for (int i=0; i<row; i++){
        ptr_matrix[i] = new char[column];
    }
    cout << "Matirx Size: " << row*column << endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            ptr_matrix[i][j] = char_row;
        }
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            cout << "ptr_matrix" << i <<"]["<< j << "]: "<<ptr_matrix[i][j] << endl;
        }
        delete[] ptr_matrix;
        return 0;
    }
}