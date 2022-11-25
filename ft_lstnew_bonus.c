/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:59:43 by mflury            #+#    #+#             */
/*   Updated: 2022/11/25 15:37:24 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*bloc;

	bloc = (t_list *)ft_calloc(sizeof(t_list), 1);
	if (!bloc)
		return (NULL);
	bloc->content = content;
	bloc->next = NULL;
	return (bloc);
}
