/**
  * Vector3d.h
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the vector from memory
  * @version 0.1
  */

#ifndef VECTOR3D_H
#define VECTOR3D_H

/// Vector 3d is made of three unsigned chars. This type was chosen for
// it's size (1 byte) and the range it supports (no signed values are
// required in Sudoku)
typedef struct{
	unsigned char _x;
	unsigned char _y;
	unsigned char _z;
} Vector3d;

/**
 * @brief Creates and initialises a new instance of the Vector3d struct and returns a pointer to it
 * @param xValue the X value for the Vector
 * @param yValue the Y value for the vector
 * @param zValue the Z value for the vector
 * @return A pointer to the Vector3d instance
 */
Vector3d* NewVector(char xValue, char yValue, char zValue);

#endif // VECTOR3D_H
