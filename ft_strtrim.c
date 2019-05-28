/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:30:22 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/28 11:16:40 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*newstr;
	int		len;

	i = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc((len + 2) * sizeof(char));
	if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
		while (s[i])
		{
			newstr[i] = s[i + 1];
			i++;
		}
	else
		newstr = ft_strcpy(newstr, s);
	len = ft_strlen(newstr);
	if (newstr[len - 1] == '\n' ||
		newstr[len - 1] == '\t' || newstr[len - 1] == ' ')
		newstr[len - 1] = '\0';
	else
		newstr[len] = '\0';
	return (newstr);
}
