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
 * @brief Creates and initialises a new instance of the Matrix3d struct and returns a pointer to it 
 * @param firstRow The vector which represents the first row of the matrix
 * @param secondRow The vector which represents the second row of the matrix
 * @param thirdRow The vector which represents the third row of the matrix
 * @return A pointer to the new instance of the Matrix3d struct
 */
Matrix3d* NewMatrix (Vector3d* firstRow, Vector3d* secondRow, Vector3d* thirdRow) {
	Matrix3d* ptr = (Matrix3d*)malloc(sizeof(Matrix3d));
	ptr->_firstRow = firstRow;
	ptr->_secondRow = secondRow;
	ptr->_thirdRow = thirdRow;
	
	return ptr;
}