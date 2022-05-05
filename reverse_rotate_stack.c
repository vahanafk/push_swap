/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:45:01 by vaghazar          #+#    #+#             */
/*   Updated: 2022/05/01 10:36:18 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    reverse_rotate_stack(t_list **lst)
{
	t_list  *tmp;

	if (!lst || !(*lst) || !(*lst) -> next)
		return (0);
	tmp = *lst;
	while ((*lst) -> next -> next)
		*lst = (*lst) -> next;
	(*lst) -> next -> next = tmp;
	tmp = (*lst) -> next;
	(*lst) -> next = NULL;
	*lst = tmp;
	return (1);
}