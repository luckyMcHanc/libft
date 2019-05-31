/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:10:13 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/30 12:15:45 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
		}
		arr[j][i] = s[i];
		i++;
	}
	return (arr);
}

int main()
{
	char s[100] = "lucky Mhlanga";
	char c = ' ';
   ft_putendl(*ft_strsplit(s, c));
   return 0;
}
