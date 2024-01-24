/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:45:33 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/24 10:09:24 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_list(t_stack *stack)
{
	t_stack	*temp;
	int		i;

	temp = stack;
	i = INT_MIN;
	while (temp)
	{
		if (temp->data > i)
			i = temp->data;
		temp = temp->next;
	}
	return (i);
}

int	min_list(t_stack *stack_a)
{
	int	min;

	min = INT_MAX;
	while (stack_a)
	{
		if (stack_a->data < min)
			min = stack_a->data;
		stack_a = stack_a->next;
	}
	return (min);
}
