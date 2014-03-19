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

void displaySudokuTopThreeRows(Sudoku* inSudokuBoardToDisplay)
{
    // Top row, top left-most row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow1().zValue();

    // Top row, top centre row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow1().zValue();

    //Top row, top right-most row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow1().zValue();
    cout << endl;

    // Top row, left-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow2().zValue();

    // Top row, centre second row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow2().zValue();

    //Top row, right-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow2().zValue();
    cout << endl;

    // Top row, left-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowLeft()->getRow3().zValue();

    // Top row, centre final row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowCentre()->getRow3().zValue();

    //Top row, right-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getTopRowRight()->getRow3().zValue();
    cout << endl;
}

void displaySudokuCentreThreeRows(Sudoku* inSudokuBoardToDisplay)
{
    // Top row, top left-most row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow1().zValue();

    // Top row, top centre row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow1().zValue();

    //Top row, top right-most row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow1().zValue();
    cout << endl;

    // Top row, left-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow2().zValue();

    // Top row, centre second row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow2().zValue();

    //Top row, right-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow2().zValue();
    cout << endl;

    // Top row, left-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowLeft()->getRow3().zValue();

    // Top row, centre final row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowCentre()->getRow3().zValue();

    //Top row, right-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getCentreRowRight()->getRow3().zValue();
    cout << endl;
}

void displaySudokuBottomThreeRows(Sudoku* inSudokuBoardToDisplay)
{
    // Top row, top left-most row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow1().zValue();

    // Top row, top centre row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow1().zValue();

    //Top row, top right-most row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow1().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow1().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow1().zValue();
    cout << endl;

    // Top row, left-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow2().zValue();

    // Top row, centre second row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow2().zValue();

    //Top row, right-most second row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow2().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow2().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow2().zValue();
    cout << endl;

    // Top row, left-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowLeft()->getRow3().zValue();

    // Top row, centre final row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowCentre()->getRow3().zValue();

    //Top row, right-most final row
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow3().xValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow3().yValue();
    cout << setw(5) << inSudokuBoardToDisplay->getBottomRowRight()->getRow3().zValue();
    cout << endl;
}

void displaySudokuBoard(Sudoku* inSudokuBoardToDisplay)
{
    displaySudokuTopThreeRows(inSudokuBoardToDisplay);
    displaySudokuCentreThreeRows(inSudokuBoardToDisplay);
    displaySudokuBottomThreeRows(inSudokuBoardToDisplay);
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
