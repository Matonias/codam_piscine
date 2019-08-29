/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/29 17:36:12 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/29 17:36:13 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int		ft_atoi(const char *str)
{
	int 	new;

	new = 0;
	if()
	while (*str)
	{
		new = (new * 10) + *str - '0';
		str++;
	}
	// TO DO add -
	return(new);
}


int 	main(void)
{
	ft_putnbr(ft_atoi("2147483647"));

	return 0;
}
