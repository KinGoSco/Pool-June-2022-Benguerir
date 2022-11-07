/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:02:19 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/30 10:04:23 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int	i;
	i = ft_strlen(str);
	i--;
	while (i >= 0 )
	{
		write (1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (str);
}
#include <stdio.h>
int main(){
	char str[] = "Hello";
	ft_rev_print(str);
}
