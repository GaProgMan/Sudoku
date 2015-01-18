/**
  * Vector3d.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the vector from memory
  * @version 0.1
  */

#include <stdlib.h>
#include "Vector3d.h"

/**
 * @brief Creates and initilises a new instance of the Vector3d struct and returns a pointer to it
 * @param xValue the X value of the vector
 * @param yValue the Y value fo the vector
 * @param zValue the Z value fo the vector
 * @return a pointer to the new instance of the Vector3d struct
 */
Vector3d* NewVector(char xValue, char yValue, char zValue){
	Vector3d* ptr = (Vector3d*)malloc(sizeof(Vector3d));
	ptr->_x = xValue;
	ptr->_y = yValue;
	ptr->_z = zValue;
	
	return ptr;
}
