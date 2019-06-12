/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:30:22 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/09 14:14:38 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		firstchar(char *s, char *spaces)
{
	int count;
	int tmp;
	int i;

	count = 0;
	while (*s)
	{
		tmp = count;
		i = 0;
		while (spaces[i])
			if (spaces[i++] == *s)
				count++;
		if (count == tmp)
			return (count);
		s++;
	}
	return (count);
}

static int		lastchar(char *s, char *spaces)
{
	int count;
	int	len;
	int i;
	int tmp;

	count = 0;
	len = ft_strlen(s) - 1;
	while (s[len])
	{
		tmp = count;
		i = 0;
		while (spaces[i])
			if (spaces[i++] == s[len])
				count++;
		if (count == tmp)
			return (count);
		len--;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	char	*newstr;
	int		len;
	int		start;
	int		spacecount;
	char	*str;

	if (s)
	{
		str = (char *)s;
		len = ft_strlen(s);
		spacecount = firstchar(str, " \n\t");
		start = spacecount;
		if (len > spacecount)
			spacecount += lastchar(str, " \n\t");
		len -= spacecount;
		if (!(newstr = ft_memalloc((size_t)len + 1)))
			return (NULL);
		newstr = ft_strncpy(newstr, (char*)str + start, len);
		newstr[len + 1] = '\0';
		return (newstr);
	}
	return (NULL);
}
