/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:14:46 by mflury            #+#    #+#             */
/*   Updated: 2022/10/31 19:47:03 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		if (to_find[0] == '\0')
			return ((char *)str);
		j = 0;
		while (str[i] != '\0')
		{
			while (str[i + j] != '\0' && str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&((char *)str)[i]);
				j++;
			}
			i++;
		}
		break ;
	}
	return (0);
}
/*
int	main()
{
	char	*str = "putin de merde marche";
	char	*to_find = "ib";

	printf("%s\n", ft_strnstr(str, to_find, '7'));
}
*/
