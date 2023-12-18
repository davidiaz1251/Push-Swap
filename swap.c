/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:50:21 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/18 19:06:30 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_stack **lst)
{
	int	i;
	int len;
	t_stack *temp;
	t_stack *last;

	last = lstlast(*lst);
	len = lstsize(*lst);
	temp = *lst;
	i = 1;
	while (temp)
	{
		if (len - i == 2)
		{
			last->next = temp->next;
			temp->next = last;
			temp->next->next->next = NULL;
			break ;
		}
		// else if (len == 2)
		// {
		// 	temp = temp->next;
		// 	temp->next = (*lst)->next;
		// 	break ;
		// }
		i++;
		temp = temp->next;
	}
}