/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:53:56 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/20 13:04:15 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char* s1, const char* s2)
{
	while (*s1 && (*s1==*s2))
	{
		s1++;
		s2++;
	}
    return (*(const unsigned char*)s1-*(const unsigned char*)s2);
}
