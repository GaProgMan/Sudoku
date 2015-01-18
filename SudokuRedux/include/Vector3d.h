/**
  * Vector3d.h
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the vector from memory
  * @version 0.1
  */

#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct{
	unsigned char _x;
	unsigned char _y;
	unsigned char _z;
} Vector3d;

/**
 * @brief Creates and instantiates a new instance of the Vector3d struct
 * @param xValue The X value to use
 * @param yValue The Y value to use
 * @param zValue The Z value to use
 * @return A pointer to the new instance of the Vector3d struct
 */
Vector3d* NewVector(char xValue, char yValue, char zValue);

/**
 * @brief Used to destroy an instance of the Vector3d struct
 * @param toDestroy The instance to free
 */
void DestroyVector(Vector3d* toDestroy);

/**
 * @brief Used to create and initialise a new instance of the Vector3d struct with random data
 * @return A pointer to the new Vector3d* instance
 */
Vector3d* CreateVector();

#endif // VECTOR3D_H
