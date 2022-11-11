/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:46:20 by mflury            #+#    #+#             */
/*   Updated: 2022/11/11 15:00:10 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (ft_strlen(dst) < dstsize)
		dstlen = ft_strlen(dst);
	else
		dstlen = dstsize;
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
/*
int	main(void)
{
	char	d[50] = "42 ";
	char	s[] = "lausanne";
	printf("%lu\n",ft_strlcat(d, s, sizeof(d)));
	printf("%s\n", d);
}
*/
