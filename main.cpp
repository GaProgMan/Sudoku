#include <iostream>
#include <iomanip>

#include "Matrix33d.h"
#include "Sudoku.h"

using namespace std;

// TODO:
//      * Create an object (poss. called SudokuBoard) that
//        represents the sudoku game board (abstraction of
//        array of Martix33d objects).
//      * Look into creating a GUI to display the Suddoku
//        board object.

// Used to output a single vector to the display.
// If and x, y or z value is equal to 0, we show
// a blank string in it's place
void displayVector(Vector3d inVectorToDisplay)
{
    cout << setw(5);
    if (inVectorToDisplay.xValue() > 0)
        cout << inVectorToDisplay.xValue();
    else
        cout << ' ';
    cout << setw(5);
        if (inVectorToDisplay.yValue() > 0)
        cout << inVectorToDisplay.yValue();
    else
        cout << ' ';
    cout << setw(5);
        if (inVectorToDisplay.zValue() > 0)
        cout << inVectorToDisplay.zValue();
    else
        cout << ' ';
    cout << endl;
}

// Used to output an entire matrix to the display
void displayMatrix(Matrix33d* inMatrixToDisplay)
{
    displayVector(inMatrixToDisplay->getRow1());
    displayVector(inMatrixToDisplay->getRow2());
    displayVector(inMatrixToDisplay->getRow3());
}

void displaySudokuBoard(Sudoku* inSudokuBoardToDisplay)
{
    displayMatrix(inSudokuBoardToDisplay->getTopRowLeft());
    displayMatrix(inSudokuBoardToDisplay->getTopRowCentre());
    displayMatrix(inSudokuBoardToDisplay->getTopRowLeft());
}

int main()
{
    // Create a new instance of the matrix class
    // for testing with.
    Matrix33d* ptr_myMatrix = new Matrix33d(1, 0, 3, 4, 5, 6, 0, 8, 9);
    //Matrix33d* ptr_myMatrix = &myMatrix;

    cout << "Matrix created" << endl;

    displayMatrix(ptr_myMatrix);

    // Create an exceptionally useful Sudoku object (sic)
    Sudoku* ptr_SudokuBoard = new Sudoku(ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix, ptr_myMatrix);

    cout << "Sudoku board created." << endl;

    displaySudokuBoard(ptr_SudokuBoard);


    char ch;
    cin >> ch;

    return 0;
}
