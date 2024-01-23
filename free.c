/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:15:51 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/23 12:12:23 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_memory(char **memory)
{
	size_t	y;

	y = 0;
	while (memory[y])
	{
		free(memory[y]);
		y++;
	}
	free(memory);
}

void	free_stack(t_stack **stack)
{
	if(*stack)
	{
		free_stack(&(*stack)->next);
		free(*stack);
		*stack = NULL;
	}
}