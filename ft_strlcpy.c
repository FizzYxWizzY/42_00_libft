/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:04:47 by mflury            #+#    #+#             */
/*   Updated: 2022/11/11 15:11:48 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	d[50] = "42 ";
	char	s[] = "Lausanne";
	printf("%lu\n", ft_strlcpy(d, s, sizeof(d)));
	printf("%s\n", d);
}
*/
