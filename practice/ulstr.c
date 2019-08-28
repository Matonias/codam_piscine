/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ulstr.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */                   
/*   Created: 2019/08/28 12:48:40 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/28 12:48:42 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

// void	ulstr(void)
// {

// }

int 	main(int argc, char *argv[])
{
	char *str;
	char **argv_t;

	argv_t = argv;
	argv_t++;
	if (argc == 3)
	{
		while (1 < argc)
		{
			str = *argv_t;
			
			// ft_putstr(str);
			// ft_putstr("\n");
			while (str)
			{
				write(1, str, 1);
				str++;	
			}
			argv_t++;
			argc--;
		}
	} 
	ft_putstr("\n");
	return (0);
}