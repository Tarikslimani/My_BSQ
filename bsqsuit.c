/*
** EPITECH PROJECT, 2017
** bsqsuite.c
** File description:
** bsqs
*/

#include "my.h"

void	remake(char **tab, int nb)
{
	int x = 0;
	int y = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			if ((tab[y][x] != '.')
			    && (tab[y][x] != 'o' && tab[y][x] != nb))
				tab[y][x] = '.';
			x = x + 1;
		}
		x = 1;
		y = y + 1;
	}
}

void	drawtab(char **tab, t_list *me, int nb)
{
	int y;
	int x;

	nb = nb - 46;
	y = me->py - nb;
	x = me->px - nb;
	me->px;
	me->py;
	while (y - 1 != me->py) {
		while (x - 1 != me->px) {
			if (tab[y][x] != 'o') {
				tab[y][x] = 'x';
			}
			x = x + 1;
		}
		x = me->px - nb;
		y = y + 1;
	}
}

int	drawvide(char **tab)
{
	int x = 0;
	int y = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			tab[y][x] = 'x';
			x = x + 1;
		}
		x = 0;
		y = y + 1;
	}
}

int	filefulled(char **tab)
{
	int x = 0;
	int y = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			if (tab[y][x] != 'o')
				return (-1);
			x = x + 1;
		}
		x = 0;
		y = y + 1;
	}
	x = 0;
	while (tab[++x]) {
		my_putstr(tab[x]);
		my_putchar('\n');
	}
	return (0);
}
