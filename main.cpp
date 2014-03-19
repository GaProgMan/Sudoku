#include <iostream>
#include <iomanip>

#include "Matrix33d.h"

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

int main()
{
    // Create a new instance of the matrix class
    // for testing with.
    Matrix33d* myMatrix = new Matrix33d(1, 0, 3, 4, 5, 6, 0, 8, 9);

    cout << "Matrix created" << endl;

//    cout << setw(5) << myMatrix->getRow1().xValue() <<  setw(5) << myMatrix->getRow1().yValue() <<  setw(5) << myMatrix->getRow1().zValue() << endl;
//    cout << setw(5) << myMatrix->getRow2().xValue() <<  setw(5) << myMatrix->getRow2().yValue() <<  setw(5) << myMatrix->getRow2().zValue() << endl;
//    cout << setw(5) << myMatrix->getRow3().xValue() <<  setw(5) << myMatrix->getRow3().yValue() <<  setw(5) << myMatrix->getRow3().zValue() << endl;

    displayMatrix(myMatrix);

//    cout << "Enter a value to check the matrix against: ";
//
//    int inValueToCheck;
//
//    cin >> inValueToCheck;
//
//    if(myMatrix->contains(inValueToCheck))
//        cout << "Matrix contains number value " << inValueToCheck << endl;
//    else
//        cout << "Matrix does not contain value " << inValueToCheck << endl;


    char ch;
    cin >> ch;

    return 0;
}
