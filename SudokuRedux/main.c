/**
  * main.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement functions to act on the SudokuBoard type
  * @version 0.1
  */

#include <stdio.h>
#include <stdlib.h>

#include "include/Vector3d.h"
#include "include/Matrix.h"
#include "include/SudokuBoard.h"

/**
 * @brief Creates and initialises a new instance of the SudokuBoard struct
 * @return A pointer to the newly created SudokuBoard struct
 */
SudokuBoard* createGameBoard(){
	// Create instances of the Vector3d, Matrix3d and SudokuBoard structs
	Vector3d* myVector = NewVector(1, 2, 3);
	Matrix3d* myMatrix = NewMatrix(myVector, myVector, myVector);
	SudokuBoard* myBoard = NewSudokuBoard(
						myMatrix, myMatrix, myMatrix,
						myMatrix, myMatrix, myMatrix,
						myMatrix, myMatrix, myMatrix);
						
	return myBoard;
}

/**
 * @brief Destroys the SudokuBaord which is passed via parameter
 * @param myBoard The board to destroy
 */
void destroyBoard(SudokuBoard* myBoard) {
	free(myBoard);
}

int main(int argc, char **argv) {
	SudokuBoard* myBoard = createGameBoard();
	destroyBoard(myBoard);
	myBoard = NULL;
	
	printf("hello world\n");
	return 0;
}
