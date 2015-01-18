/**
  * Matrix3d.c
  * @author Jamie "GaProgMan" Taylor
  * @todo 
  * @version 0.1
  */

#include "Matrix.h"
#include "Vector3d.h"
#include <stdlib.h>

/**
 * @brief Creates and initialises a new instance of the Matrix3d struct
 * @param firstRow The vector which represents the first row of the matrix
 * @param secondRow The vector which represents the second row of the matrix
 * @param thirdRow The vector which represents the thrid row of the matrix
 * @return A pointer to the new instance of the Matrix3d struct
 */
Matrix3d* NewMatrix (Vector3d* firstRow, Vector3d* secondRow, Vector3d* thirdRow) {
	Matrix3d* ptr = malloc(sizeof(Matrix3d));
	ptr->_firstRow = firstRow;
	ptr->_secondRow = secondRow;
	ptr->_thirdRow = thirdRow;
	
	return ptr;
}

/**
 * @brief Used to destroy an instance of the Matrix3d struct
 * @param toDestroy The instance to free
 */
void DestroyMatrix(Matrix3d* toDestroy) {
	DestroyVector(toDestroy->_firstRow);
	DestroyVector(toDestroy->_secondRow);
	DestroyVector(toDestroy->_thirdRow);
	free(toDestroy);
}

/**
 * @brief Used to create and initialise a new instance of the Matrix3d struct
 * @return A pointer to the new Matrix3d* instance
 */
Matrix3d* CreateMatrix() {
	return NewMatrix(CreateVector(), CreateVector(), CreateVector());
}