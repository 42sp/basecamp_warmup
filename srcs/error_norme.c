/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_norme.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <iwillens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:50:16 by iwillens          #+#    #+#             */
/*   Updated: 2021/05/24 15:01:02 by iwillens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	i;
	i = 0;
	while (i < 10)
	{
		i++;
	}
	if ((i = 0) || (i = 1))
		return (1);
	return (0);
}