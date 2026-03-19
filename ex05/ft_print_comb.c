/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 01:30:04 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 18:07:14 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_digit(char number_1, char number_2, char number_3)
{
	write(STDOUT_FILENO, &number_1, 1);
	write(STDOUT_FILENO, &number_2, 1);
	write(STDOUT_FILENO, &number_3, 1);
	if (!(number_1 == '7' && number_2 == '8' && number_3 == '9'))
		write(STDOUT_FILENO, ", ", 2);
}

void	ft_loop_02(char number_1, char number_2, char number_3)
{
	while (number_3 <= 57)
	{
		ft_write_digit(number_1, number_2, number_3);
		number_3++;
	}
}

void	ft_loop_01(char number_1, char number_2, char number_3)
{
	while (number_2 <= 56)
	{
		number_3 = number_2 + 1;
		ft_loop_02(number_1, number_2, number_3);
		number_2++;
	}
}

void	ft_loop_00(char number_1, char number_2, char number_3)
{
	while (number_1 <= 55)
	{
		number_2 = number_1 + 1;
		ft_loop_01(number_1, number_2, number_3);
		number_1++;
	}
}

void	ft_print_comb(void)
{
	char	number_1;
	char	number_2;
	char	number_3;

	number_1 = 48;
	number_2 = 48;
	number_3 = 48;
	ft_loop_00(number_1, number_2, number_3);
}
/*
int		main(void)
{
	ft_print_comb();
	return (0);
}
*/
