/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:08:11 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:03 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_stack **a)
{
	t_stack	*aux;
	t_stack	*temp;
	int		i;
	int		num;

	i = 1;
	num = 0;
	temp = *a;
	while (num < lstsize(*a))
	{
		aux = *a;
		while (aux)
		{
			if (temp->data > aux->data)
				i++;
			aux = aux->next;
		}
		temp->index = i;
		i = 0;
		temp = temp->next;
		num++;
	}
}

static int	number_bits(int len)
{
	int	num_bits;
	int	i;

	num_bits = 0;
	i = len - 1;
	while ((i >> num_bits) != 0)
		num_bits++;
	return (num_bits);
}

void	algorithm(t_stack **a, t_stack **b, int len)
{
	int	num_bits;
	int	i;
	int	j;

	i = -1;
	j = -1;
	num_bits = number_bits(len);
	while (++i < num_bits)
	{
		j = -1;
		while (++j < len)
		{
			if (((*a)->index >> i & 1) == 1)
				rotate(a, "ra\n");
			else if (((*a)->index >> i & 1) == 0)
				push_stack(a, b, "pb\n");
		}
		while (lstsize(*b) != 0)
			push_stack(b, a, "pa\n");
	}
}
