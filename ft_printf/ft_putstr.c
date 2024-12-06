/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:08:24 by ryagoub           #+#    #+#             */
/*   Updated: 2023/11/29 15:58:46 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_putstr(char *s)
{
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}
