/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   repeat_alpha.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 19:30:04 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/27 19:30:05 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void		repeat_alpha(char *str)
{
	int	char_c;
	int	char_i;

	while (*str != '\0')
	{
		char_i = 0;
		if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (*str >= 'a' && *str <= 'z')
				char_c = (*str - 'a') + 1;
			if (*str >= 'A' && *str <= 'Z')
				char_c = (*str - 'A') + 1;
			while(char_i < char_c)
			{
				write(1, str, 1);
				char_i++;
			}
		} 
		else {
			write(1, str, 1);
		}
		str++;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	return (0);
}
