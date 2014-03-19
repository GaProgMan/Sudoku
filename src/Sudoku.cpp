#include "Sudoku.h"
#include "Matrix33d.h"

/********************************************************************
 * Constructors and de-constructors
 ********************************************************************/

// Default constructor
Sudoku::Sudoku()
{
}

// Default de-constructor
Sudoku::~Sudoku()
{
}

Sudoku::Sudoku(Matrix33d* inTopRowLeft,     Matrix33d* inTopRowCentre,          Matrix33d* inTopRowRight,
               Matrix33d* inCentreRowLeft,  Matrix33d* inCentreRowCentre,       Matrix33d* inCentreRowRight,
               Matrix33d* inBottomRowLeft,  Matrix33d* inBottomRowCentre,       Matrix33d* inBottomRowRight)
{
    this->sudokuBoard[0] = inTopRowLeft;
    this->sudokuBoard[1] = inTopRowCentre;
    this->sudokuBoard[2] = inTopRowRight;
    this->sudokuBoard[3] = inCentreRowLeft;
    this->sudokuBoard[4] = inCentreRowCentre;
    this->sudokuBoard[5] = inCentreRowRight;
    this->sudokuBoard[6] = inBottomRowLeft;
    this->sudokuBoard[7] = inBottomRowCentre;
    this->sudokuBoard[8] = inBottomRowRight;
}


/********************************************************************
 * Accessors
 ********************************************************************/

Matrix33d* Sudoku::getTopRowLeft() const
{
    return this->sudokuBoard[0];
}

Matrix33d* Sudoku::getTopRowCentre() const
{
    return this->sudokuBoard[1];
}

Matrix33d* Sudoku::getTopRowRight() const
{
    return this->sudokuBoard[2];
}

Matrix33d* Sudoku::getCentreRowLeft() const
{
    return this->sudokuBoard[3];
}

Matrix33d* Sudoku::getCentreRowCentre() const
{
    return this->sudokuBoard[4];
}

Matrix33d* Sudoku::getCentreRowRight() const
{
    return this->sudokuBoard[5];
}

Matrix33d* Sudoku::getBottomRowLeft() const
{
    return this->sudokuBoard[6];
}

 Matrix33d* Sudoku::getBottomRowCentre() const
{
    return this->sudokuBoard[7];
}

Matrix33d* Sudoku::getBottomRowRight() const
{
    return this->sudokuBoard[8];
}
