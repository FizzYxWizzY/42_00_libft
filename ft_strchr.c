/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:21:12 by mflury            #+#    #+#             */
/*   Updated: 2022/10/27 14:50:34 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "42 lausanne";
	char	c = '\0';
	printf ("%s\n", ft_strchr(str, c));
	
}
*/