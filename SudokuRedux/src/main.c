/**
  * main.c
  * @author Jamie "GaProgMan" Taylor
  * @todo implement functions to act on the SudokuBoard type
  * @version 0.1
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "include/Vector3d.h"
#include "include/Matrix.h"
#include "include/SudokuBoard.h"
#include "include/Game.h"


int main(int argc, char **argv) {
	// initialise a random number generator - used for
	// generating "random" data
	srand((unsigned)time(NULL));
	
	printf("building board\n");
	SudokuBoard* myBoard = createGameBoard();
	
	printf("destroying board\n");
	DestroyBoard(myBoard);
	return 0;
}
