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
 * @brief Creates and initialises a new instance of the SudokuBoard struct and returns a pointer to it
 * @param TopLeft The top-left martix of the board
 * @param TopCentre The top-centre matrix of the board
 * @param TopRight The top-right matrix of the board
 * @param CentreLeft The centre-left matrix o the board
 * @param CentreCentre The centred matrix of the board
 * @param CentreRight The centre-right matrix of the board
 * @param BottomLeft The bottom-left matrix of the board
 * @param BottomCentre The bottom-centre matrix of the board
 * @param BottomRight The bottom-right matrix of the board
 * @return A pointer to the new instance of the SudokuBoard struct
 */
SudokuBoard* NewSudokuBoard (
			Matrix3d* TopLeft, Matrix3d* TopCentre, Matrix3d* TopRight,
			Matrix3d* CentreLeft, Matrix3d* CentreCentre, Matrix3d* CentreRight,
			Matrix3d* BottomLeft, Matrix3d* BottomCentre, Matrix3d* BottomRight);

#endif // SUDOKUBOARD_H
