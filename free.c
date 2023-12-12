/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:15:51 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/12 11:16:21 by ldiaz-ra         ###   ########.fr       */
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