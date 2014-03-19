#include "Matrix33d.h"

/********************************************************************
 * Constructors and de-constructors
 ********************************************************************/

// Default constructor
Matrix33d::Matrix33d()
{
}

// Default de-constructor
Matrix33d::~Matrix33d()
{
}

Matrix33d::Matrix33d(int a11, int a12, int a13,
                     int a21, int a22, int a23,
                     int a31, int a32, int a33)
{
    row1 = Vector3d(a11, a12, a13);
    row2 = Vector3d(a21, a22, a23);
    row3 = Vector3d(a31, a32, a33);
}

//Matrix33d::Matrix33d(const Vector3d& inRow1,
//                     const Vector3d& inRow2,
//                     const Vector3d& inRow3)
//{
//    this->row1 = inRow1;
//    this->row2 = inRow2;
//    this->row3 = inRow3;
//}

const Vector3d& Matrix33d::getRow1() const{
	return row1;
}

const Vector3d& Matrix33d::getRow2() const{
	return row2;
}

const Vector3d& Matrix33d::getRow3() const{
	return row3;
}

bool Matrix33d::contains(int inValue)
{
    if (this->row1.contains(inValue) || this->row2.contains((inValue)) || this->row3.contains(inValue))
        return true;
    else
        return false;
}
