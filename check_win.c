#include "lib.h"


/**
* check horizontal de la victoire
* @param: le tableau de jeu
* @return: 0 si victoire
*/
int check_horizontal_win(char **game_array, int player)
{
  int x;
  int y;
  x = 0;
  y = 5;

  while (y >= 0)
  {
    while (x < 7)
    {
      if ((game_array[y][x] == game_array[y][x + 1]) && (game_array[y][x] != '-') && (game_array[y][x + 1] != '-'))
      {
        if ((game_array[y][x] == game_array[y][x + 2]) && (game_array[y][x] != '-') && (game_array[y][x + 2] != '-'))
        {
          if ((game_array[y][x] == game_array[y][x + 3]) && (game_array[y][x] != '-') && (game_array[y][x + 3] != '-'))
          {
						if (player == 0)
						{
							printf("player 1 win \n");
						}
						else
						{
							printf("player 2 win \n");
						}
            return (0);
          }
        }
      }
      x++;
    }
    x = 0;
    y--;
  }
	return (1);
}

/**
* check vertical de la victoire
* @param: le tableau de jeu
* @return: 0 si victoire
*/
int check_vertical_win(char **game_array, int player)
{
  int x;
  int y;
  x = 0;
  y = 5;

  while (x < 7)
  {
    while (y >= 0)
    {
      if ((game_array[y][x] != '-') && (game_array[y - 1][x] != '-') && (game_array[y][x] == game_array[y - 1][x]))
      {
        if ((game_array[y][x] != '-') && (game_array[y - 2][x] != '-') && (game_array[y][x] == game_array[y - 2][x]))
        {
          if ((game_array[y][x] != '-') && (game_array[y - 3][x] != '-') && (game_array[y][x] == game_array[y - 3][x]))
          {
						if (player == 0)
						{
							printf("player 1 win \n");
						}
						else
						{
							printf("player 2 win \n");
						}
            return (0);
          }
        }
      }
      y--;
    }
    y = 5;
    x++;

  }
	return (1);
}

/**
* check vertical de la victoire
* @param: le tableau de jeu
* @return: 0 si victoire
*/
int check_diagonal_win(char **game_array, int player)
{
	int x;
  int y;
  x = 0;
  y = 5;

	while (y >= 0)
	{
		while (x < 7)
		{
			// diagonal droite
			// definition d'intervalles x et y pour eviter de sortir de l'array et segfault
			if(x >= 0 && x <= 3)
			{
				if(y >= 3 && y <= 5)
				{
					if ((game_array[y][x] != '-') && (game_array[y - 1][x + 1] != '-') && (game_array[y][x] == game_array[y - 1][x + 1]))
					{
						if ((game_array[y][x] != '-') && (game_array[y - 2][x + 2] != '-') && (game_array[y][x] == game_array[y - 2][x + 2]))
						{
							if ((game_array[y][x] != '-') && (game_array[y - 3][x + 3] != '-') && (game_array[y][x] == game_array[y - 3][x + 3]))
							{
								if (player == 0)
								{
									printf("player 1 win \n");
								}
								else
								{
									printf("player 2 win \n");
								}
								return (0);
							}
						}
					}
				}
			}

			// diagonal gauche
			// definition d'intervalles x et y pour eviter de sortir de l'array et segfault
			if(x >= 3 && x <= 6)
			{
				if(y >= 3 && y <= 5)
				{
					if ((game_array[y][x] != '-') && (game_array[y - 1][x - 1] != '-') && (game_array[y][x] == game_array[y - 1][x - 1]))
					{
						if ((game_array[y][x] != '-') && (game_array[y - 2][x - 2] != '-') && (game_array[y][x] == game_array[y - 2][x - 2]))
						{
							if ((game_array[y][x] != '-') && (game_array[y - 3][x - 3] != '-') && (game_array[y][x] == game_array[y - 3][x - 3]))
							{
								if (player == 0)
								{
									printf("player 1 win \n");
								}
								else
								{
									printf("player 2 win \n");
								}
								return (0);
							}
						}
					}
				}
			}

			x++;
		}
		x = 0;
		y--;

	}

return (1);
}

/**
* check s'il reste des places dipsponnibles dans la premiere ligne
* @param: le tableau de jeu
* @return: 0 si toutes les cases sont occupees par des jetons
*/
int check_tie(char **game_array)
{
  int x;
  int y;
  x = 0;
  y = 0;

  while (x < 7)
  {
		if (game_array[y][x] == '-')
		{
			return (1);
		}
    x++;
  }
	printf("EGALITE");
	return (0);
}

/**
* check si un jeton provoques une victoire
* @param: le tableau de jeu
* @return: 0 si victoire (permet d'arreter la boucle principale)
*/
int check_win (char **game_array, int player)
{
  int horizontal_check;
  int vertical_check;
	int diagonal_check;
	int tie_check;

  horizontal_check = 1;
  vertical_check = 1;
	diagonal_check = 1;
	tie_check = 1;

  horizontal_check = check_horizontal_win(game_array, player);
  vertical_check = check_vertical_win(game_array, player);
	diagonal_check = check_diagonal_win(game_array, player);
	tie_check = check_tie(game_array);

  if (horizontal_check == 0 || vertical_check == 0 || diagonal_check == 0 || tie_check == 0)
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
