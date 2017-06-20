/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrevert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvasilie <vvasilie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:32:26 by vvasilie          #+#    #+#             */
/*   Updated: 2016/11/25 13:46:31 by vvasilie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrevert(t_list *lst)
{
	t_list *lst_rev;
	t_list *lst_curr;
	t_list *lst_prev;

	lst_rev = NULL;
	while (TRUE)
	{
		lst_prev = NULL;
		lst_curr = lst;
		while (lst_curr->next != NULL)
		{
			lst_prev = lst_curr;
			lst_curr = lst_curr->next;
		}
		ft_lstadd_back(&lst_rev, lst_curr);
		if (lst_prev != NULL )
			lst_prev->next = NULL;
		else
			break;
	}
	return (lst_rev);
}

