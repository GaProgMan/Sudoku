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

// Overloaded constructor
Sudoku::Sudoku(const Matrix33d& inTopRowLeft,    const Matrix33d& inTopRowCentre,    const Matrix33d& inTopRowRight,
               const Matrix33d& inCentreRowLeft, const Matrix33d& inCentreRowCentre, const Matrix33d& inCentreRowRight,
               const Matrix33d& inBottomRowLeft, const Matrix33d& inBottomCentre,    const Matrix33d& inBottomRowRight)
{
    this->sudokuBoard[0] = inTopRowLeft;
    this->sudokuBoard[1] = inTopRowCentre;
    this->sudokuBoard[2] = inTopRowRight;
    this->sudokuBoard[3] = inCentreRowLeft;
    this->sudokuBoard[4] = inCentreRowCentre;
    this->sudokuBoard[5] = inCentreRowRight;
    this->sudokuBoard[6] = inBottomRowLeft;
    this->sudokuBoard[7] = inBottomCentre;
    this->sudokuBoard[8] = inBottomRowRight;
}

/********************************************************************
 * Accessors
 ********************************************************************/

const Matrix33d& Sudoku::getTopRowLeft() const
{
    return this->sudokuBoard[0];
}

const Matrix33d& Sudoku::getTopRowCentre() const
{
    return this->sudokuBoard[1];
}

const Matrix33d& Sudoku::getTopRowRight() const
{
    return this->sudokuBoard[2];
}

const Matrix33d& Sudoku::getCentreRowLeft() const
{
    return this->sudokuBoard[3];
}

const Matrix33d& Sudoku::getCentreRowCentre() const
{
    return this->sudokuBoard[4];
}

const Matrix33d& Sudoku::getCentreRowRight() const
{
    return this->sudokuBoard[5];
}

const Matrix33d& Sudoku::getBottomRowLeft() const
{
    return this->sudokuBoard[6];
}

const Matrix33d& Sudoku::getBottomRowCentre() const
{
    return this->sudokuBoard[7];
}

const Matrix33d& Sudoku::getBottomRowRight() const
{
    return this->sudokuBoard[8];
}
