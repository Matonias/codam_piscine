/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 16:15:44 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/27 16:15:45 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	char *temp;
	temp = s1;
	while(*s2 != '\0')
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	return (temp);
}

int		main(void)
{
	char *output;
	char *output_real;
	char str_src[] = "Hello";
	char str[10];

	output = ft_strcpy(str, str_src);
	output_real = strcpy(str, str_src);
	ft_putstr(output);
	ft_putstr("\n");
	ft_putstr(output_real);
}	