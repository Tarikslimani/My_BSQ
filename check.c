/*
** EPITECH PROJECT, 2017
** check.c
** File description:
** chec
*/

#include "my.h"

int	checkposition(char **tab, t_list *me, int nb)
{
	int tmp = 0;

	me->px = 0;
	me->py = 0;
	while (tab[me->py] != NULL) {
		while (tab[me->py][me->px] != '\0') {
			if (tab[me->py][me->px] == nb)
				return (0);
			me->px = me->px + 1;
		}
		me->px = 1;
		me->py = me->py + 1;
	}
}

int	checksquare(char **tab, int nb)
{
	int x = 1;
	int y = 1;
	int i = -1;
	int ret = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			if (tab[y][x] == nb || tab[y][x] == nb + 1) {
				if (((tab[y][x - 1] == nb)
				     || tab[y][x - 1] == nb+1)
				    && ((tab[y - 1][x - 1] == nb)
					|| tab[y-1][x-1] == nb+1) && ((tab[y - 1][x] == nb)
								      || tab[y-1][x] == nb+1)) {
					tab[y][x] = nb + 1;
					ret = -1;
				}
			}
			x = x + 1;
		}
		x = 1;
		y = y + 1;
	}
	if (ret == -1)
		return (-1);
	else
		return (0);
}

char	**fill_my_tab(char *data)
{
	int nb_line;
	char **tab;

	if ((nb_line = get_my_nb_line(data)) == -1)
		return (NULL);
	if ((tab = malloc(sizeof(char*) * nb_line)) == NULL)
		return (NULL);
}
