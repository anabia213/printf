/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsgnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancavalc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:01:00 by ancavalc          #+#    #+#             */
/*   Updated: 2023/11/08 18:02:21 by ancavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsgnbr(unsigned int num)
{
	static unsigned int		count;

	count = 0;
	if (num >= 10)
		ft_putunsgnbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count);
}
