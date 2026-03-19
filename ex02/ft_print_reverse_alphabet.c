/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 22:19:43 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:36:34 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 122;
	while (alpha >= 97)
	{
		write(STDOUT_FILENO, &alpha, 1);
		alpha--;
	}
}
/*
int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
