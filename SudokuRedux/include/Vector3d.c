/**
  * Vector3d.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the vector from memory
  * @version 0.1
  */

#include <stdlib.h>
#include "Vector3d.h"

/**
 * @brief Creates and instantiates a new instance of the Vector3d struct
 * @param xValue The X value to use
 * @param yValue The Y value to use
 * @param zValue The Z value to use
 * @return A pointer to the new instance of the Vector3d struct
 */
Vector3d* NewVector(char xValue, char yValue, char zValue){
	Vector3d* ptr = malloc(sizeof(Vector3d));
	ptr->_x = xValue;
	ptr->_y = yValue;
	ptr->_z = zValue;
	
	return ptr;
}

/**
 * @brief Used to destroy an instance of the Vector3d struct
 * @param toDestroy The instance to free
 */
void DestroyVector(Vector3d* toDestroy) {
	free(toDestroy);
}

/**
 * @brief Used to create and initialise a new instance of the Vector3d struct with random data
 * @return A pointer to the new Vector3d* instance
 */
Vector3d* CreateVector() {
	return NewVector(rand() % 10, rand() % 10, rand() % 10);
}