#ifndef SUDOKU_H
#define SUDOKU_H

#include "Matrix33d.h"

class Sudoku
{
    public:
        Sudoku();
        ~Sudoku();

        Sudoku(const Matrix33d& inTopRowLeft,    const Matrix33d& inTopRowCentre,    const Matrix33d& inTopRowRight,
               const Matrix33d& inCentreRowLeft, const Matrix33d& inCentreRowCentre, const Matrix33d& inCentreRowRight,
               const Matrix33d& inBottomRowLeft, const Matrix33d& inBottomCentre,    const Matrix33d& inBottomRowRight);

        const Matrix33d& getTopRowLeft()      const;
        const Matrix33d& getTopRowCentre()    const;
        const Matrix33d& getTopRowRight()     const;
        const Matrix33d& getCentreRowLeft()   const;
        const Matrix33d& getCentreRowCentre() const;
        const Matrix33d& getCentreRowRight()  const;
        const Matrix33d& getBottomRowLeft()   const;
        const Matrix33d& getBottomRowCentre() const;
        const Matrix33d& getBottomRowRight()  const;

    protected:
    private:
        Matrix33d sudokuBoard [9];
};

#endif // SUDOKU_H
