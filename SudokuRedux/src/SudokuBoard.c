/**
  * SudokuBoard.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the sudoku board from memory
  * @version 0.1
  */

#include "include/SudokuBoard.h"
#include "include/Matrix.h"

#include<stdlib.h>

/**
 * @brief Creates and initialises a new instance of the SudokuBoard struct
 * @param TopLeft The matrix which represents the top left portion of the board
 * @param TopCentre The matrix which represents the top centre portion of the board
 * @param TopRight The matrix which represents the top right portion of the board
 * @param CentreLeft The matrix which represents the centre left portion of the board
 * @param CentreCentre The matrix which represents the centre most portion of the board
 * @param CentreRight The matrix which represents the centre right portion of the board
 * @param BottomLeft The matrix which represents the bottom left portion of the board
 * @param BottomCentre The matrix which represents the bottom centre portion of the board
 * @param BottomRight The matrix which represents the bottom right portion of the board
 * @return A pointer to the new instance of the SudokuBoard struct
 */
SudokuBoard* NewSudokuBoard(
			Matrix3d* TopLeft, Matrix3d* TopCentre, Matrix3d* TopRight,
			Matrix3d* CentreLeft, Matrix3d* CentreCentre, Matrix3d* CentreRight,
			Matrix3d* BottomLeft, Matrix3d* BottomCentre, Matrix3d* BottomRight) {
	SudokuBoard* ptr = malloc(sizeof(SudokuBoard));
	ptr->_topLeft = TopLeft;
	ptr->_topCentre = TopCentre;
	ptr->_topRight = TopRight;
	ptr->_centreLeft = CentreLeft;
	ptr->_centreCentre = CentreCentre;
	ptr->_centreRight = CentreRight;
	ptr->_bottomLeft = BottomLeft;
	ptr->_bottomCentre = BottomCentre;
	ptr->_bottomRight = BottomRight;
	
	return ptr;
}

/**
 * @brief Used to destroy an instance of the SudokuBoard struct
 * @param toDestroy The instance to free
 */
void DestroyBoard(SudokuBoard* toDestroy) {
	DestroyMatrix(toDestroy->_topLeft);
	DestroyMatrix(toDestroy->_topCentre);
	DestroyMatrix(toDestroy->_topRight);
	DestroyMatrix(toDestroy->_centreLeft);
	DestroyMatrix(toDestroy->_centreCentre);
	DestroyMatrix(toDestroy->_centreRight);
	DestroyMatrix(toDestroy->_bottomLeft);
	DestroyMatrix(toDestroy->_bottomCentre);
	DestroyMatrix(toDestroy->_bottomRight);
	free(toDestroy);
}

/**
 * @brief Used to create and initialise a new instance of the SudokuBoard struct
 * @return A pointer to the new SudokuBaord instance
 */
SudokuBoard* createGameBoard() {
	return NewSudokuBoard(
						CreateMatrix(), CreateMatrix(), CreateMatrix(),
						CreateMatrix(), CreateMatrix(), CreateMatrix(),
						CreateMatrix(), CreateMatrix(), CreateMatrix());
}