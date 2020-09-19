/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkParams.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:50:20 by threiss           #+#    #+#             */
/*   Updated: 2020/09/19 15:36:08 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int		check_param(char *str)
{
	int		i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0 && str[i] >= '0' && str[i] <= '4')
			i++;
		else if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
