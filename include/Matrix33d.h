#ifndef MATRIX33D_H
#define MATRIX33D_H

#include "Vector3d.h"


class Matrix33d
{
    public:
        Matrix33d();
        ~Matrix33d();

        Matrix33d(int a11, int a12, int a13,
                  int a21, int a22, int a23,
                  int a31, int a32, int a33);

        Matrix33d(const Vector3d& inRow1,
                  const Vector3d& inRow2,
                  const Vector3d& inRow3);

        const Vector3d& getRow1() const;
        const Vector3d& getRow2() const;
        const Vector3d& getRow3() const;

        bool contains(int inValue);

    protected:
    private:
        Vector3d row1, row2, row3;
};

#endif // MATRIX33D_H
