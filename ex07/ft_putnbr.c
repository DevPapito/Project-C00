/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 03:13:17 by pezio             #+#    #+#             */
/*   Updated: 2026/03/18 17:57:08 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putnbr(int nb)
{
	char	character;
	long	nl;

	nl = nb;
	if (nl < 0)
	{
		nl *= -1;
		ft_putchar('-');
	}
	if (nl >= 10)
	{
		ft_putnbr(nl / 10);
	}
	character = (nl % 10 + '0');
	ft_putchar(character);
}

//int		main(void)
//{
//	ft_putnbr(-2147483648);
//	ft_putnbr(42);
//	return (0);
//}
//
