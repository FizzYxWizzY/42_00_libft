/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:54:13 by mflury            #+#    #+#             */
/*   Updated: 2022/11/18 19:23:05 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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

static int	ft_wlen(char *s, unsigned int start, char c)
{
	int	i;
	
	i = 0;
	while (s[start] == c)
		start++;
	while (s[start])
	{
		if (s[start] == c)
			break ;
		i++;
		start++;
	}
	return (i);
}

static void	ft_wwrite(char **tab, const char *s, char c)
{
	unsigned int	i;
	unsigned int	nlist;
	unsigned int	lastpos;

	i = 0;
	nlist = 0;
	lastpos = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			lastpos = 0;
		}
		while (s[i] != c)
		{
			tab[nlist][lastpos] = s[i];
			if (s[i + 1] == c)
			{
				tab[nlist][lastpos + 1] = '\0';
				nlist++;
				tab[nlist] = malloc(count_word(s, i, c) * sizeof(char));
			}
			i++;
			lastpos++;
		}
	}
}




char	**ft_split(const char *s, char c)
{
	char	**tab;

	if (!c)
		return (s);
	tab = ft_calloc((ft_wcount(s, c) + 1), sizeof(char *));
	if (!tab || !s)
		return (NULL);
	
}
*/