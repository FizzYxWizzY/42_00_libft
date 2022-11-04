/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:40:59 by mflury            #+#    #+#             */
/*   Updated: 2022/11/04 16:09:41 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "42 lausanne";
	char	*s2 = "42 loosanne";

	printf ("%d\n", ft_memcmp(s1, s2, 6));
}
*/
