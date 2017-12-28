/*
** EPITECH PROJECT, 2017
** fonction.c
** File description:
** fonction
*/

#include "my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i = -1;

	while (str[++i])
		my_putchar(str[i]);
}

int	get_my_nb_line(char *data)
{
	int i = -1;
	int nb = 0;

	while (data[++i] && data[i] != '\n') {
		if (data[i] < '0' || data[i] > '9') {
			my_putstr("Wrong map\n");
			return (-1);
		}
		nb = (nb * 10) + data[i] - 48;
	}
	return (nb);
}

int     checkonebyone(char **tab)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int tmp = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			x++;
		}
		tmp = x;
		x = 0;
		y++;
	}
	if (tmp == 1 || y == 1)
		checksuit(tab);
}

int	checksuit(char **tab)
{
	int ret = 1;
	int x = 0;
	int y = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			if (tab[y][x] == '.') {
				tab[y][x] = 'x';
				return (-1);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}
