/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 13:55:35 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/14 10:11:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minish.h"
#include <stdlib.h>

static void		update_shlvl(t_sh *sh)
{
	const char		*shlvl = get_env(sh, "SHLVL=");
	char			*lvl;

	lvl = ft_itoa(ft_atoi(shlvl) + 1);
	if (lvl == NULL)
		return ;
	set_env(sh, "SHLVL=", lvl);
	free(lvl);
}

int				main(int argc, char **argv)
{
	t_sh			*sh;

	print_motd();
	sh = init_sh();
	update_shlvl(sh);
	start_sh(sh);
	ft_putstr("exit\n");
	kill_sh(sh);
	(void)argc;
	(void)argv;
	return (0);
}
