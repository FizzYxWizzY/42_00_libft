/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:54:13 by mflury            #+#    #+#             */
/*   Updated: 2022/11/17 18:08:27 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wcount(const char *s, char c)
{
	unsigned int	i;
	unsigned int	state;
	unsigned int	count;

	i = 0;
	state = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			state = 0;
		if (s[i] != c)
			state = 1;
		if (state == 1 && s[i] && s[i + 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	ft_wwrite()


static




char	**ft_split(const char *s, char c)
{
	char	*tab;

	tab = ft_calloc((ft_wcount(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	ft_w
}
