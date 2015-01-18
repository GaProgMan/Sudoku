/**
  * SudokuBoard.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement a free method to remove the sudoku board from memory
  * @version 0.1
  */

#include "SudokuBoard.h"
#include "Matrix.h"

#include<stdlib.h>

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
SudokuBoard* NewSudokuBoard(
			Matrix3d* TopLeft, Matrix3d* TopCentre, Matrix3d* TopRight,
			Matrix3d* CentreLeft, Matrix3d* CentreCentre, Matrix3d* CentreRight,
			Matrix3d* BottomLeft, Matrix3d* BottomCentre, Matrix3d* BottomRight) {
	SudokuBoard* ptr = (SudokuBoard*)malloc(sizeof(SudokuBoard));
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