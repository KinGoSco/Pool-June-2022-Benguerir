/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 04:58:58 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/28 09:40:18 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb && nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}
 #include <stdio.h>

int main()
{
	int nb;

	nb = 6;

	printf("%d",ft_is_prime(nb));









}
