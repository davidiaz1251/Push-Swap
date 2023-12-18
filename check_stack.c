/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:09:24 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/18 16:09:39 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_letter(char *value)
{
	while (*value)
	{
		if (*value < '0' || *value > '9')
			return (1);
		value++;
	}
	return (0);
}

int	lstcheck(t_stack *lst, char *value)
{
	if (check_letter(value) || \
	(ft_atoi(value) < INT_MIN || ft_atoi(value) > INT_MAX))
		return (1);
	while (lst)
	{
		if (lst->data == ft_atoi(value))
			return (1);
		lst = lst->next;
	}
	return (0);
}
