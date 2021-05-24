/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:21:53 by iwillens          #+#    #+#             */
/*   Updated: 2021/05/24 15:01:38 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basecamp_test.h"

void	test_memset(void)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 1024 * 1024 * 30);
	s = (char *)memset(s, '0', 1024 * 1024 * 30);
	free(s);
	printf("Memset Done\n");
}
