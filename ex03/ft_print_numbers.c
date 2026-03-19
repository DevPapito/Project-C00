/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:31:29 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:37:17 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number_ascii;

	number_ascii = 48;
	while (number_ascii <= 57)
	{
		write(STDOUT_FILENO, &number_ascii, 1);
		number_ascii++;
	}
}
/*
int		main(void)
{

	ft_print_numbers();

	return (0);

}
*/
