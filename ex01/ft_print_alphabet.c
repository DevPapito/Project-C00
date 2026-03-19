/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 20:28:48 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:33:20 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		write(STDOUT_FILENO, &alpha, 1);
		alpha++;
	}
}
/*
int		main(void)
{

	ft_print_alphabet();

	return (0);

}
*/
