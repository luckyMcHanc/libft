/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:30:22 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/27 13:40:06 by lmhlanga         ###   ########.fr       */
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
	newstr = (char *)malloc((len + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
		{
			newstr[i] = s[i + 1];
		}
		else
		{
			newstr[i] = s[i];
		}
		i++;
	}
	len = ft_strlen(newstr);
	if (newstr[len - 1] == '\n' ||
		newstr[len - 1] == '\t' || newstr[len - 1] == ' ')
	{
		newstr[len - 1] = '\0';
	}
	else
	{
	newstr[len] = '\0';
	}
	ft_putnbr(len);
	return (newstr);
}

int main()
{
	char s[10] = "luckylucky";
	ft_putendl(ft_strtrim(s));
	return 0;
}
