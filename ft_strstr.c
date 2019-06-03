/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:38:45 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 14:42:31 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	n;
	char	*s;

	s = s1;
	n = ft_strlen(s2);
	while (*s)
		if (!ft_memcmp(s++, s2, n))
			return (n - 1);
	return (0);
}
