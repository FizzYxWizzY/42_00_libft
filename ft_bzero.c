/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:13:34 by mflury            #+#    #+#             */
/*   Updated: 2022/10/27 17:19:18 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

//pas tester, pas encore fait la libft pour l instant

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n * sizeof(char));
}
/*
int main (void)
{
	char *s = "42 lausanne";
	ft_bzero(s, 2);
	printf("%s\n", s);
}
*/