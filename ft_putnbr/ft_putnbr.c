/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 15:22:31 by snechaev          #+#    #+#             */
/*   Updated: 2019/03/26 16:50:21 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h>

void  ft_putnbr(int i)
{
	char	c;
	if (i == -2147483648)
		write(1, "-2147483648", 11);
	else if (i < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-i);
	}
	else if (i >= 10)
	{
		ft_putnbr(i / 10);
		c = i % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = i + '0';
		write(1, &c, 1);
	}
}
