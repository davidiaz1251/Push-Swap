/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:22:12 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/19 13:49:18 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack **stack_from, t_stack **stack_to, char *str)
{
	t_stack *aux;

	if (!stack_from || !(*stack_from))
		return ;
	aux = (*stack_from)->next;
	(*stack_from)->next = (*stack_to);
	(*stack_to) = (*stack_from);
	(*stack_from) = aux;
	if (str)
		write(1, str, 3);
}
