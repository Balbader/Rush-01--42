/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:25:16 by threiss           #+#    #+#             */
/*   Updated: 2020/09/19 15:36:01 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		check_param(char *str);
char	**ft_init_malloc(void);
char	**ft_fill_tab(char **tab, char *str);
char	**ft_fill_inner_tab(char **tab);
void	ft_print_tab(char **tab);
void	ft_backtracking(char **tab);
