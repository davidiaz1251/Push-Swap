/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:11:50 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/08 14:24:49 by ldiaz-ra         ###   ########.fr       */
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
	return (new);
}

int	lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
int max_list(t_stack *stack)
{
	t_stack *temp;
	int		i;

	temp = stack;
	i = 0;
	while (temp)
	{
		if (temp->data > i)
			i = temp->data;
		temp = temp->next;
	}
	return (i);
}