/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:11:50 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/12 11:14:47 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	lstadd_back(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
			lstadd_back(&(*lst)->next, new);
	}
}

int	lstcheck(t_stack *lst, int value)
{
	while (lst)
	{
		if (lst->data == value)
			return (1);	
		lst = lst->next;
	}
	return (0);
}