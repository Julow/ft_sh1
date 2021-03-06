/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:15:51 by jaguillo          #+#    #+#             */
/*   Updated: 2015/01/12 22:34:11 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline t_bool	ft_iswhite(char c)
{
	if (c == '\n' || c == ' ' || c == '\f' || c == '\t' || c == '\v'
		|| c == '\r')
		return (TRUE);
	return (FALSE);
}
