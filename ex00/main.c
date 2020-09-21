/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:20:15 by threiss           #+#    #+#             */
/*   Updated: 2020/09/20 23:36:55 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int		main(int ac, char **av)
{
	char		**tab;
	if (ac == 2)
	{
		if (check_param(av[1]))
		{
			tab = ft_fill_tab(ft_init_malloc(), av[1]);
			ft_backtracking(tab, 1, 1, '1');
		}
		else
			write(1, "Error", 5);
	}
	else
		write(1, "Error", 5);
	ft_putchar('\n');
	return (0);
}
