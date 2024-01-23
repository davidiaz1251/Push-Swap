/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:09:24 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/23 12:56:42 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_letter(char *value)
{
	if (*value == '-' || *value == '+')
		value++;
	if (value[0] == '\0')
		return (1);
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

int	ordered(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (!(stack_a->data < stack_a->next->data))
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
