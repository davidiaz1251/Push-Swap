/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:48:53 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/19 15:27:24 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack, char *str)
{
	t_stack *aux;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	aux = lstlast(*stack);
	aux->next = (*stack);
	(*stack) = (*stack)->next;
	aux->next->next = NULL;
	if (str)
		write(1, str, 3);
}

void	rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	write(1, "rr\n", 3);
}

void	rotate_reverse(t_stack **stack, char *str)
{
	t_stack *aux;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	aux = *stack;
	while (aux->next->next)
		aux = aux->next;
	aux->next->next = (*stack);
	(*stack) = aux->next;
	aux->next = NULL;
	if (str)
		write(1, str, 3);
}

void	rotate_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_reverse(stack_a, NULL);
	rotate_reverse(stack_b, NULL);
	write(1, "rrr\n", 4);
}