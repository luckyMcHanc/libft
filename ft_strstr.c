/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:38:45 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/21 15:01:30 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t n;

	n = ft_strlen(s2);
	while (*s1)
		if (!ft_memcmp(s1++, s2, n))
			return (s1 - 1);
	return (0);
}
