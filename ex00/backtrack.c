/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 19:43:46 by threiss           #+#    #+#             */
/*   Updated: 2020/09/20 23:39:21 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int		ft_backtracking(char **tab, int line, int col, char nb)
{
	if (col == 5)
	{
		ft_print_tab(tab);
		return (1);
	}
	while (nb <= '4')
	{
		tab[line][col] = nb;
		if (ft_check_line_col(tab, line, col, nb) == 1)
		{
			if (col == 4)
			{
				if (ft_check_views_line(tab, line) == 1)
				{
					if (ft_backtracking(tab, line + 1, 1, '1') == 1)
						return (1);
				}
			}
			if (line == 4 && col < 5)
			{
				if (ft_check_views_col(tab, col) == 1)
				{
					if (ft_backtracking(tab, line, col + 1, '1') == 1)
						return (1);
				}
			}
			else
			{
				if (ft_backtracking(tab, line, col + 1, '1') == 1)
					return (1);
			}
		}
		nb++;
	}
	return (0);
}

void		ft_print_tab(char **tab)
{
	int		line;
	int		col;

	line = 1;
	while (line < 5)
	{
		col = 1;
		while (col < 5)
		{
			ft_putchar(tab[line][col]);
			if (col < 4)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
