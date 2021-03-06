/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:34:48 by fgrea             #+#    #+#             */
/*   Updated: 2017/03/13 17:42:59 by fgrea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_pow(int nb, int i)
{
	if (i >= 0)
	{
		while (i-- != 0)
			nb *= nb;
	}
	else
	{
		while (i++ != 0)
			nb *= nb;
	}
	return (nb);
}
