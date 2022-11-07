/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 09:27:09 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/29 11:38:28 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write_number(int nb)
{
	if (nb > 9)
		ft_write_number(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}
int main ()
{
	int nb;
	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write (1, "fizz", 4);
		else if (nb % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(nb);
		write (1, "\n", 1);
		nb++;
	}
}
