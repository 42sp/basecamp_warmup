/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:21:43 by iwillens          #+#    #+#             */
/*   Updated: 2021/05/24 15:00:26 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basecamp_test.h"

void	test_ascii(void)
{
	unsigned char	c;

	c = 0x2F;
	while (++c <= 0x7F)
		write(1, &c, 1);
	write(1, "\n", 1);
	printf("Ascii Done\n");
}
