/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:36:17 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/29 11:45:19 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	if ((newstr = (char *)malloc(ft_strlen(s) + 1)) == NULL)
		return (null);
	while (s[i])
	{
		newstr[i] = f(s[i], i);
		i++;
	}
}
