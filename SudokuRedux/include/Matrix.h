/**
  * Matrix3d.h
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the matrix from memory
  * @version 0.1
  */

#ifndef MATRIX_H
#define MATRIX_H

#include "Vector3d.h"

typedef struct{
	Vector3d* _firstRow;
	Vector3d* _secondRow;
	Vector3d* _thirdRow;
} Matrix3d;

/**
 * @brief Creates and initialises a new instance of the Matrix3d struct
 * @param firstRow The vector which represents the first row of the matrix
 * @param secondRow The vector which represents the second row of the matrix
 * @param thirdRow The vector which represents the thrid row of the matrix
 * @return A pointer to the new instance of the Matrix3d struct
 */
Matrix3d* NewMatrix (Vector3d* firstRow, Vector3d* secondRow, Vector3d* thirdRow);

/**
 * @brief Used to destroy an instance of the Matrix3d struct
 * @param toDestroy The instance to free
 */
void DestroyMatrix(Matrix3d* toDestroy);

/**
 * @brief Used to create and initialise a new instance of the Matrix3d struct
 * @return A pointer to the new Matrix3d* instance
 */
Matrix3d* CreateMatrix();

#endif // MATRIX_H
