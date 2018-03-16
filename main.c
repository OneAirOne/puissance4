#include "lib.h"

int main(int argc, char const *argv[])
{
  system("clear");
  char *str_user;
  str_user = malloc(sizeof(char));
  int user_return;
  int game_win;
  int player;
  int i;
  int y;
  i = 0;
  y = 0;
  player = 1;
  game_win = 0;
  char **screen = malloc(sizeof(char *) * 6);

  while (i < 6)
  {
    screen[i] = malloc(sizeof(char) * 6);
    i++;
  }

  init_table (screen);

  while (check_win(screen, player))
  {
    show_game (screen);
		if(player == 1)
		{
			printf("Player #1's turn : ");
		}
		else
		{
			printf("Player #2's turn : ");
		}
    gecko_read (str_user);
    player = change_player(player);
    user_return = atoi(str_user); // transforme un alphanumerique en int
    place_token (screen, user_return, player);

    // system("sleep 1");
    system("clear");
  }
  show_game (screen);
  return (0);
}
