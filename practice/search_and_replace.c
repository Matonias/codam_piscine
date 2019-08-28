/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_and_replace.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 20:59:30 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/27 20:59:31 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void	*ft_replace_letter(char *str, char o, char n)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (*temp == o)
		{
			*temp = n;
		}
		(temp)++;
	}
	return (str);
}

int 	main(int argc, char **argv)
{
	char *str;

	if (argc == 4)
	{
		str = ft_replace_letter(argv[1], *argv[2], *argv[3]);
		ft_putstr(str);
	}
	return (0);
}
