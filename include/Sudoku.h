#ifndef SUDOKU_H
#define SUDOKU_H

#include "Matrix33d.h"

class Sudoku
{
    public:
        Sudoku();
        ~Sudoku();

        Sudoku(Matrix33d* inTopRowLeft,     Matrix33d* inTopRowCentre,          Matrix33d* inTopRowRight,
               Matrix33d* inCentreRowLeft,  Matrix33d* inCentreRowCentre,       Matrix33d* inCentreRowRight,
               Matrix33d* inBottomRowLeft,  Matrix33d* inBottomRowCentre,       Matrix33d* inBottomRowRight);

        Matrix33d* getTopRowLeft()      const;
        Matrix33d* getTopRowCentre()    const;
        Matrix33d* getTopRowRight()     const;
        Matrix33d* getCentreRowLeft()   const;
        Matrix33d* getCentreRowCentre() const;
        Matrix33d* getCentreRowRight()  const;
        Matrix33d* getBottomRowLeft()   const;
        Matrix33d* getBottomRowCentre() const;
        Matrix33d* getBottomRowRight()  const;

    protected:
    private:
        Matrix33d* sudokuBoard [9];
};

#endif // SUDOKU_H
