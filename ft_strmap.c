/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:43:39 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 15:44:21 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (s)
	{
		if ((newstr = (char *)malloc(ft_strlen(s) + 1)) == NULL)
			return (NULL);
		while (s[i])
		{
			newstr[i] = f(s[i]);
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (NULL);
}
