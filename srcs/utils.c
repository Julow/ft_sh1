/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 17:36:16 by jaguillo          #+#    #+#             */
/*   Updated: 2014/12/04 17:36:17 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minish.h"
#include <stdlib.h>

void			exit_err(char *err)
{
	ft_putstr_fd("ft_minishell1: ", 2);
	ft_putstr_fd(err, 2);
	ft_putchar_fd('\n', 2);
	ft_gbclear();
	exit(1);
}

void			ft_tabkil(void **tab)
{
	int				i;

	i = -1;
	while (tab[++i] != NULL)
		ft_gbfree(tab[i]);
	ft_gbfree(tab);
}