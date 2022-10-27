/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:43:24 by mflury            #+#    #+#             */
/*   Updated: 2022/10/27 17:10:16 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

// "askip sa marche comme sa" -un piscineux

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = c;
	return (s);
}
/*
int	main(void)
{
	char	*s = "42 lausanne";
	char	c = 'x';
	//printf("%s\n", s);
	ft_memset(s, c, 4);
	printf("%s\n", s);
}
*/