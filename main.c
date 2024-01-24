/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:20:28 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/24 10:09:08 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = -1;
	while (argc - (++i) >= 1)
	{
		split = ft_split(argv[i], ' ');
		if (!split[0])
			ft_error(a);
		while (split[++j])
		{
			if (lstcheck(*a, split[j]))
				ft_error(a);
			lstadd_back(a, lstnew(ft_atoi(split[j])));
		}
		j = -1;
		free_memory(split);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		stack(argc, argv, &a);
		if (ordered(a))
			return (0);
		index_stack(&a);
		low_number(&a, &b, lstsize(a));
		free_stack(&a);
	}
	return (0);
}
