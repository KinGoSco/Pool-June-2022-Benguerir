/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 06:50:44 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/29 06:50:47 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*p;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	p = (int *)malloc(sizeof(int) * len);
	if (!p)
	{
		*range = NULL;
		return (-1);
	}
	while (i < len)
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (len);
}
