/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:38:22 by mflury            #+#    #+#             */
/*   Updated: 2022/11/28 15:57:26 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*bloc;

	while (*lst)
	{
		bloc = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = bloc;
	}
	free(*lst);
	*lst = NULL;
}
