/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkCases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 17:44:46 by threiss           #+#    #+#             */
/*   Updated: 2020/09/20 23:34:29 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int		ft_check_line_col(char **tab, int line, int col, char nb)
{
	int		i_line;
	int		i_col;

	i_line = 1;
	i_col = 1;
	while (i_col < col)
	{
		if (tab[line][i_col] == nb)
			return (0);
		i_col++;
	}
	while (i_line < line)
	{
		if (tab[i_line][col] == nb)
			return (0);
		i_line++;
	}
	return (1);
}

int		ft_check_views_col(char **tab, int col)
{
	int		i;
	int		view;
	int 	max;
	i = 1;
	view = 1;
	max = 0;
	while (i < 5)
	{
		if (max < tab[i][col])
		{
			max = tab[i][col];
			view++;
		}
		i++;
	}
	if ((view + 48) != tab[0][col])
		return (0);
	return (1);
}

int		ft_check_views_line(char **tab, int line)
{
	int		i;
	int		view;
	int		max;

	i = 1;
	view = 1;
	max = 0;
	while (i < 5)
	{
		if (max < tab[line][i + 1])
		{
			max = tab[line][i + 1];
			view++;
		}
		i++;
	}
	if ((view + 48) != tab[line][0])
		return (0);
	return (1);
}
