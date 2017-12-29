/*
** EPITECH PROJECT, 2017
** bsq.c
** File description:
** bsq
*/

#include "my.h"

int	my_strlen(char const *str)
{
	int i = -1;

	while (str[++i]);
	return (i);
}

int	bsq(char *buffer, int size)
{
	char **tab;
	int i = -1;
	int t = 0;
	int nb = 46;
	t_list *me  = malloc(sizeof(*me));

	if ((tab = fill_my_tab(buffer)) == NULL)
		return (-1);
	tab = my_strtowordtab(tab, buffer, '\n');
	tab = &tab[1];
	if (filefulled(tab) == 0)
		return (0);
	bsqsuite(tab, nb, me);
}

int	bsqsuite(char **tab, int nb, t_list *me)
{
	int i = -1;

	while (checksquare(tab, nb) == -1) {
		nb++;
		checksquare(tab, nb);
	}
	if (nb == 127)
		drawvide(tab);
	else
		if (checkonebyone(tab) == 0) {
			checkposition(tab, me, nb);
			remake(tab, nb);
			drawtab(tab, me, nb);
			remake(tab, 120);
		}
	while (tab[++i]) {
		write(1,tab[i],my_strlen(tab[i]));
		my_putchar('\n');
	}
}

char	*get_file_data(char *file_name, int *size)
{
	int fd;
	char *buffer;
	struct stat file;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (NULL);
	stat(file_name, &file);
	if ((buffer = malloc(sizeof(char) * file.st_size + 1)) == NULL)
		return (NULL);
	if ((file.st_size) <= 1
	    || ((*size) = read(fd, buffer, file.st_size)) <= 0) {
		my_putstr("File is empty");
		return (NULL);
	}
	buffer[(*size)] = '\0';
	close(fd);
	return (buffer);
}

int	main(int ac, char **av)
{
	char *data;
	int size;

	if (ac < 2) {
		my_putstr("Put atleast one file\n");
		return (84);
	}
	else if ((data = get_file_data(av[1], &size)) == NULL)
		return (84);
	else if (bsq(data, size) == -1)
		return (84);
	return (0);
}
