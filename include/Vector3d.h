#ifndef VECTOR3D_H
#define VECTOR3D_H

/********************************************************************
 * Vector3d class
 *
 * Used to represent a 3 dimensional vector. Each value in the vector
 * (known as X, Y and Z internally) is represented by an integer.
 ********************************************************************/

class Vector3d
{
    public:
        // Default constructor
        Vector3d(void);

        // Copy constructor
        Vector3d(const Vector3d& other);

        // Overloaded constructor
        Vector3d(int inX, int inY, int inZ);

        // Default de-constructor
        ~Vector3d(void);

        // Accessors
        int xValue() const;
        int yValue() const;
        int zValue() const;

        // Mutators
        void xValue(int inValue);
        void yValue(int inValue);
        void zValue(int inValue);

        bool contains(int inValue);

    protected:
    private:
        int x, y, z;
};

#endif // VECTOR3D_H
