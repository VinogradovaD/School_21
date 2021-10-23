/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:07:11 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/23 15:11:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}