/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** mh
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct t_list
{
	int size;
	int px;
	int py;
}t_list;


int	checksuit(char **tab);
int	bsqsuite(char **tab, int nb, t_list *me);
int	checkonebyone(char **tab);
void	remake(char **tab, int nb);
void	drawtab(char **tab, t_list *me, int nb);
int	drawvide(char **tab);
int	filefulled(char **tab);
char	*get_file_date(char *file_name);
int	checksquare(char **tab, int nb);
int	checkposition(char **tab, t_list *me, int nb);
char	 **my_strtowordtab(char **tab, char *str, char sep);
int	bsq(char *buffer, int size);
char	**fill_my_tab(char *data);
void	my_putstr(char *str);
int	get_my_nb_line(char *data);
void	my_putchar(char c);
int	count_words(char *str, char sep);
int	my_wordlen(char *str, int *i, char sep);
char	*my_wordcpy(char *tab, char *str, int *i, char sep);
char	**my_strtowordtab(char **tab, char *str, char sep);
int	main(int ac, char **av);

#endif /* !MY_H_ */
