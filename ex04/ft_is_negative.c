/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:39:24 by pezio             #+#    #+#             */
/*   Updated: 2026/03/03 22:38:37 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	character;

	character = 'P';
	if (n < 0)
	{
		character = 'N';
		write(STDOUT_FILENO, &character, 1);
		return ;
	}
	write(STDOUT_FILENO, &character, 1);
}
/*
int		main(void)
{

	ft_is_negative(1);
	return (0);

}
*/
