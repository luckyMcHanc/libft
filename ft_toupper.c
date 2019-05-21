/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:08:56 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/21 10:30:03 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return c;
}
