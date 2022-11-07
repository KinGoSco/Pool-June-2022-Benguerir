/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 06:50:12 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/29 06:50:23 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (arr);
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
