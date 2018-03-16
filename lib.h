#ifndef LIB_H_
#define LIB_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void show_game ( char ** game_array );
void init_table (char ** game_array);
int gecko_read ( char * str );
int check_win (char **game_array, int player);
void place_token (char ** game_array, int column, int player);
char change_player (int player);
int check_horizontal_win(char **game_array, int player);
int check_vertical_win(char **game_array, int player);
int check_diagonal_win(char **game_array, int player);
int check_tie(char **game_array);


#endif
