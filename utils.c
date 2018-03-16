#include "lib.h"


/**
* permet de recuperer la saisie utilisateur
* @param: *str -> string pour stocker le retour de read
* @return: resultat saisie par le user
*/
int gecko_read ( char * str )
{
	printf("%s\n",str);
  return (read(0, str, 2)); // 0 = prompt
}

/**
* permet d'initialiser le jeu
* @param: la grille de jeu
*/
void init_table (char ** game_array)
{
  int counter_y;
  int counter_x;
  counter_y = 0;
  counter_x = 0;
  while (counter_y < 6)
  {
    while (counter_x < 7)
    {
      game_array[counter_y][counter_x] = '-';
      counter_x++;
    }
    counter_x = 0;
    counter_y++;
  }
}

/**
* permet de changer de player a chaque tour
* @param: le player
*/
char change_player (int player)
{
  // char player[3] = "XO\0";
  if (player == 0)
  {
    return (1);
  }
  else
  {
    return (0);
  }
}
