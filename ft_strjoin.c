/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:25:59 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/25 15:42:28 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	joint = (char *)malloc(len + 1);
	if (s1 == NULL || s2== NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		if (i <= j)
		{
			joint[i] = s1[j];
			j++;
		}
		else
		{
			joint[i] = s2[i];
		}
	}
	return (joint);
}

int main()
{
	char s1[10] = "lucky";
	char s2[10] = "bongi";
	printf("%s",ft_strjoin(s1,s2));
	return 0;
}
