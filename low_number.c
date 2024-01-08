/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:01:57 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/08 14:30:47 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	two_numbers(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		swap(a, "sa\n");
}

static void	three_numbers(t_stack **a)
{
	int max;

	max = max_list(*a);

	if ((*a)->data == max)
		rotate(a, "ra\n");
	else if ((*a)->next->data == max)
		rotate_reverse(a, "rra\n");
	if ((*a)->data > (*a)->next->data)
		swap(a, "sa\n");
}

int low_number(t_stack **a, t_stack **b, int len)
{
	(void)b;
	if (len == 2)
		two_numbers(a);
	if (len == 3)
		three_numbers(a);
	return (0);
}