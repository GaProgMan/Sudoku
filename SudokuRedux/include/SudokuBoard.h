/**
  * SudokuBoard.h
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the sudoku board from memory
  * @version 0.1
  */

#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

#include "Matrix.h"

typedef struct{
	Matrix3d* _topLeft;
	Matrix3d* _topCentre;
	Matrix3d* _topRight;
	Matrix3d* _centreLeft;
	Matrix3d* _centreCentre;
	Matrix3d* _centreRight;
	Matrix3d* _bottomLeft;
	Matrix3d* _bottomCentre;
	Matrix3d* _bottomRight;
} SudokuBoard;

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
SudokuBoard* NewSudokuBoard (
			Matrix3d* TopLeft, Matrix3d* TopCentre, Matrix3d* TopRight,
			Matrix3d* CentreLeft, Matrix3d* CentreCentre, Matrix3d* CentreRight,
			Matrix3d* BottomLeft, Matrix3d* BottomCentre, Matrix3d* BottomRight);

/**
 * @brief Used to destroy an instance of the SudokuBoard struct
 * @param toDestroy The instance to free
 */
void DestroyBoard(SudokuBoard* toDestroy);

/**
 * @brief Used to create and initialise a new instance of the SudokuBoard struct
 * @return A pointer to the new SudokuBaord instance
 */
SudokuBoard* createGameBoard();

#endif // SUDOKUBOARD_H
