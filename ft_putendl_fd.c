/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:40:20 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 13:44:10 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s && fd)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			++s;
		}
		ft_putchar_fd('\n', fd);
	}
	return ;
}
