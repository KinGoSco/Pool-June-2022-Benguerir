/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:38:53 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/29 11:46:34 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac > 1)
	{
		ac--;
		while (av[ac][i] != '\0')
		{
			write (1, &av[ac][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}