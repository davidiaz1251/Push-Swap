/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:50:21 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/23 12:52:55 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **lst, char *str)
{
	t_stack	*temp;

	if (!lst || !(*lst) || !((*lst)->next))
		return ;
	temp = (*lst);
	(*lst) = (*lst)->next;
	temp->next = (*lst)->next;
	(*lst)->next = temp;
	if (str)
		write(1, str, 3);
}

void	swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	write(1, "ss\n", 3);
}
