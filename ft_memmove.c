/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:44:23 by mflury            #+#    #+#             */
/*   Updated: 2022/11/04 14:34:05 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptsrc;
	char	*ptdst;

	ptdst = (char *)dst;
	ptsrc = (char *)src;
	if ((ptsrc == NULL) && (ptdst == NULL))
		return (NULL);
	if ((ptsrc < ptdst) && (ptdst < ptsrc + n))
	{
		ptdst += n;
		ptsrc += n;
		while (n)
		{
			*--ptdst = *--ptsrc;
			n--;
		}
	}
	else
	{
		while (n--)
			*ptdst++ = *ptsrc++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[100] = "6*7lausanne";
	char	*src = "42 ";
	
	printf("%s\n", ft_memmove(dst, src, 3));
}
*/
