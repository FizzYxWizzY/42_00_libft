/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:54:13 by mflury            #+#    #+#             */
/*   Updated: 2022/11/23 14:22:04 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wcount(char const *s, char c)
{
	unsigned int	i;
	unsigned int	tab;

	if (!s[0])
		return (0);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	tab = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		tab++;
	return (tab);
}

static void	ft_row(char **str, unsigned int *str_len, char c)
{
	unsigned int	i;

	*str += *str_len;
	*str_len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*str_len)++;
		i++;
	}
}

static char	**ft_free_split(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*str;
	unsigned int	i;
	unsigned int	str_len;

	tab = ft_calloc(sizeof(char *), (ft_wcount(s, c) + 1));
	if (!tab)
		return (NULL);
	str = (char *)s;
	str_len = 0;
	i = 0;
	while (i < ft_wcount(s, c))
	{
		ft_row(&str, &str_len, c);
		tab[i] = ft_calloc(sizeof(char), (str_len + 1));
		if (tab[i] == NULL)
			return (ft_free_split(tab));
		ft_strlcpy(tab[i], str, str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
