/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:01:57 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/24 10:13:23 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_numbers(t_stack **a)
{
	int	max;

	max = max_list(*a);
	if ((*a)->data == max)
		rotate(a, "ra\n");
	else if ((*a)->next->data == max)
		rotate_reverse(a, "rra\n");
	if ((*a)->data > (*a)->next->data)
		swap(a, "sa\n");
}

static void	four_numbers(t_stack **a, t_stack **b)
{
	int	min;

	min = min_list(*a);
	if ((*a)->next->data == min)
		rotate(a, "ra\n");
	else if ((*a)->next->next->data == min)
	{
		rotate(a, "ra\n");
		rotate(a, "ra\n");
	}
	else if ((*a)->next->next->next->data == min)
		rotate_reverse(a, "rra\n");
	if (ordered((*a)))
		return ;
	push_stack(a, b, "pb\n");
	three_numbers(a);
	push_stack(b, a, "pa\n");
}

static void	five_numbers(t_stack **a, t_stack **b)
{
	int		min;

	min = min_list(*a);
	if ((*a)->next->data == min)
		rotate(a, "ra\n");
	else if ((*a)->next->next->data == min)
	{
		rotate(a, "ra\n");
		rotate(a, "ra\n");
	}
	else if ((*a)->next->next->next->data == min)
	{
		rotate_reverse(a, "rra\n");
		rotate_reverse(a, "rra\n");
	}
	else if ((*a)->next->next->next->next->data == min)
		rotate_reverse(a, "rra\n");
	if (ordered(*a))
		return ;
	push_stack(a, b, "pb\n");
	four_numbers(a, b);
	push_stack(b, a, "pa\n");
}

int	low_number(t_stack **a, t_stack **b, int len)
{
	if (len == 2)
		swap(a, "sa\n");
	else if (len == 3)
		three_numbers(a);
	else if (len == 4)
		four_numbers(a, b);
	else if (len == 5)
		five_numbers(a, b);
	else if (len > 5)
		algorithm(a, b, len);
	return (0);
}
