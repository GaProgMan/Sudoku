#include <iostream>
#include <iomanip>

#include "Matrix33d.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Matrix33d* myMatrix = new Matrix33d(1, 2, 3, 4, 5, 6, 7, 8, 9);

    cout << "Matrix created" << endl;

    cout << setw(5) << myMatrix->getRow1().xValue() <<  setw(5) << myMatrix->getRow1().yValue() <<  setw(5) << myMatrix->getRow1().zValue() << endl;
    cout << setw(5) << myMatrix->getRow2().xValue() <<  setw(5) << myMatrix->getRow2().yValue() <<  setw(5) << myMatrix->getRow2().zValue() << endl;
    cout << setw(5) << myMatrix->getRow3().xValue() <<  setw(5) << myMatrix->getRow3().yValue() <<  setw(5) << myMatrix->getRow3().zValue() << endl;

    if(myMatrix->contains(10))
        cout << "Matrix contains number value 10" << endl;
    else
        cout << "Matrix does not contain value 10" << endl;


    char ch;
    cin >> ch;

    return 0;
}