#ifndef BOARD_H_
#define BOARD_H_

/* Includes */
//#include "ListUtils.h"

/* Defines */
typedef unsigned char byte;

#define WALL 'W'
#define EMPTY '#'
#define CAT 'C'
#define MOUSE 'M'
#define CHEESE 'P'

#define BOARD_SIZE 7

/* Structures */

/** Game Board
 *
 */
struct board {
	/** Constant 7*7 size
	 ____________
	|[0,6]	[6,6]|
	|	     |
	|	     |
	|[0,0]	[6,0]|
	 ------------
	*/
	char board[BOARD_SIZE][BOARD_SIZE];
}; 

/** Game State
 *
 *
 */
typedef struct game {
	// pointer to the board (constant)
	struct board* board;
	// cat mouse cheese coordinates
	byte cat_x;
	byte cat_y;
	byte mouse_x;
	byte mouse_y;
	byte cheese_x;
	byte cheese_y;
	// who's turn is it
	char player;
	// number of steps left
	byte turns;
	// number of steps in the minimax algorithm
	byte num_steps;
} game;

/* Functions */

//ListRef getChildren(game game);

//int evaluateGame(game* game);

#endif /* GAME_UTILS_H_ */
