/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/29 17:42:05 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/29 17:42:08 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void	ft_putnbr(int nbr)
{
	char 	c;

	// 32556
	if(nbr == -2147483648)
	{
		ft_putnbr(-214748364);
		write(1, "8", 1);
		return ;
	}
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
