/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:54:05 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:47:11 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_transform_number(int number_digit)
{
	return (number_digit + '0');
}

void	write_digit(char digit_00, char digit_01, char digit_02, char digit_03)
{
	write(STDOUT_FILENO, &digit_00, 1);
	write(STDOUT_FILENO, &digit_01, 1);
	write(STDOUT_FILENO, " ", 1);
	write(STDOUT_FILENO, &digit_02, 1);
	write(STDOUT_FILENO, &digit_03, 1);
	if (!(digit_00 == '9' && digit_01 == '8' && digit_02 == '9' && digit_03))
		write(STDOUT_FILENO, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		number_digit_00;
	int		number_digit_01;

	number_digit_00 = 0;
	while (number_digit_00 <= 98)
	{
		number_digit_01 = (number_digit_00 + 1);
		while (number_digit_01 <= 99)
		{
			write_digit(
				ft_transform_number((number_digit_00 / 10)),
				ft_transform_number((number_digit_00 % 10)),
				ft_transform_number((number_digit_01 / 10)),
				ft_transform_number((number_digit_01 % 10)));
			number_digit_01++;
		}
		number_digit_00++;
	}
}
/*
int		main(void)
{
	ft_print_comb2();
	return (0);
}
*/
