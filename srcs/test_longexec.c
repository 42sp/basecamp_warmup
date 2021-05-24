/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_longexec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:21:49 by iwillens          #+#    #+#             */
/*   Updated: 2021/05/24 15:02:15 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basecamp_test.h"

void	test_longexec(void)
{
	int	a;
	int	b;
	int	c;

	a = 0x2F;
	while (a <= 0x7F)
	{
		b = 0x2F;
		while (b <= 0x7F)
		{
			c = 0x2F;
			while (c <= 0x7F)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
	printf("Longexec Done\n");
}
