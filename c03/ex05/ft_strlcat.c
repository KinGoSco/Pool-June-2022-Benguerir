/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 00:32:04 by nkhachab          #+#    #+#             */
/*   Updated: 2022/06/25 00:43:09 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	len = i + j;
	if (size == 0 || size <= i)
		return (size + j);
	size = size - i - 1;
	j = 0;
	while (src[j] != '\0' && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
