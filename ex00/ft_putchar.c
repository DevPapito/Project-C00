/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:42:33 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:31:55 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(STDOUT_FILENO, &character, 1);
}
/*
int		main(void)
{
	char	c;

	c = 'A';
	ft_putchar(c);

	return (0);
}
*/
