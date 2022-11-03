/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:44:23 by mflury            #+#    #+#             */
/*   Updated: 2022/11/03 17:58:33 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdst;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	if (!(psrc || pdst))
		return (NULL);
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[100] = "6*7lausanne";
	char	*src = "";
	
	printf("%s\n", ft_memmove(dst, src, 3));
}
*/
