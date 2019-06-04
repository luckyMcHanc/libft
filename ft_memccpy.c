/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:40:57 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/04 15:09:50 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		i;
	char 		*found; 

	i = 0;
	dp = dst;
	sp = src;
	found = "false";
	while (i < n && sp[i] != c)
	{
		dp[i] = sp[i];
		i++;
	}
	i = 0;
	while(dp[i])
	{
		if (dp[i] == c)
			found = "true";
		i++;
	}
	if (ft_strcmp(found, "true"))
		return (dst);
	else
		return (NULL);
}
int main()
{
	char s1[10];
	char s2[10] = "lucky";
	ft_memccpy(s1,s2,'c',5);
	printf("%s",s1);
}
