/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_bits.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/28 18:15:55 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/28 18:15:57 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void	print_bits(unsigned char octet)
{
    int z; 
    int oct;

    z = 128;
    oct = octet;
    while (z > 0)
    {
        if (oct & z)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        z >>= 1;
    }
}

int		main(void)
{
	print_bits(128);
}
