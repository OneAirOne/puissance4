#include "lib.h"

/*
* permet d'afficher le tableau de jeux
* @param : **game_array -> tableau d'affichage du jeux
*/
void show_game ( char ** game_array )
{
  int counter_y ;

  counter_y = 0;
  printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
  printf( " =============================\n" ) ;
  while ( counter_y < 6)
  {
    printf("| %c | %c | %c | %c | %c | %c | %c |\n", game_array[counter_y][0], game_array[counter_y][1] ,
    game_array [ counter_y ] [ 2 ] , game_array [ counter_y ] [ 3 ] , game_array [ counter_y ] [ 4 ] , game_array [ counter_y ] [ 5 ] ,
    game_array [ counter_y ] [ 6 ] ) ; counter_y ++;
  }
  printf ( "\n" ) ;
}
