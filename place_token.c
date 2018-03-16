#include "lib.h"
/**
* permet de placer un jeton dans le game_array
* @param: le tableau de jeux
* @param: le numero de la colonne selectionnee par le joueur
* @param: le booleen correspondant au player
*/
void place_token (char ** game_array, int column, int player)
{
  int counter_y;

  int counter_x;
  int token;
  char player_token[1];
  counter_y = 5;
  counter_x = 0;
  token = 0;
  if (player == 0)
  {
    player_token[0] = 'X';
  }
  else
  {
    player_token[0] = '0';
  }
  while (counter_y >= 0)
  {
    while (counter_x < 7)
    {
      if (counter_x == (column - 1))
      {
        if (game_array[counter_y][counter_x] == '-' && token != 1)
        {
          game_array[counter_y][counter_x] = player_token[0];
          token = 1;

        }
        // printf("game_array[counter_y] = %s\n",game_array[counter_y]);
        // printf("counter_y = %d | counter_x = %d \n",counter_y, counter_x);
        // printf("game_array[counter_y][counter_x] = %c\n\n",game_array[counter_y][counter_x]);
      }
      else
      {
        // return (-1);
      }
      counter_x++;
    }
    counter_x = 0;
    counter_y--;
  }
}
