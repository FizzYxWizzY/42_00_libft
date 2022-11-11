/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:02:13 by mflury            #+#    #+#             */
/*   Updated: 2022/11/11 17:48:04 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!size || !count)
		return (malloc(0));
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, ft_strlen(ptr));
	return (ptr);
}
