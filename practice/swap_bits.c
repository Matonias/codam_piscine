/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_bits.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkolkman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/28 16:50:34 by mkolkman      #+#    #+#                 */
/*   Updated: 2019/08/28 16:50:36 by mkolkman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}

void bin(int n)
{
    /* Step 1 */
    if (n > 1)
        bin(n/2);
    /* Step 2 */
    printf("%d", n % 2);
}

int		main(void)
{
	unsigned char c;
	printf("%d", 100);
	c = swap_bits(100);
	printf("%d", c);
	// bin(c);
}
