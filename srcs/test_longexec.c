/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_longexec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:21:49 by iwillens          #+#    #+#             */
/*   Updated: 2020/11/01 02:31:19 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basecamp_test.h"

void	test_longexec(void)
{
	int a;
	int b;
	int c;

	a = 0x2F;;
	while (a <= 0x7F)
	{
		b = 0x2F;;
		while (b <= 0x7F)
		{
			c = 0x2F;;
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