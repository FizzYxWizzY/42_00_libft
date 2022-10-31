/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:54:27 by mflury            #+#    #+#             */
/*   Updated: 2022/10/31 19:47:38 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
		else
			i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "42 lausanne";
	char	c = ' ';
	printf ("%s\n", ft_strrchr(str, c));
	
}
*/
