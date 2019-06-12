/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:25:59 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/09 11:20:51 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(newstr = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < len && s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
