/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 11:16:06 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/07/04 12:12:32 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_copyuntil(char **line, char *content, int c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (content[++i])
		if (content[i] == c)
			break ;
	k = i;
	if (!(*line = ft_strnew(i)))
		return (0);
	if (content[j] && j < i)
	{
		if (!(*line = ft_strncpy(*line, content, i)))
			return (0);
	}
	return (k);
}
