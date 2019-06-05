/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:53:56 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/05 15:08:05 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
		}
	}
	return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
}
