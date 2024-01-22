/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:20:28 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/22 14:44:31 by ldiaz-ra         ###   ########.fr       */
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
		while (split[++j])
		{
			if (lstcheck(*a, split[j]))
				ft_error();
			lstadd_back(a, lstnew(ft_atoi(split[j])));
		}
		j = -1;
		free_memory(split);
	}
}

void	printlst(t_stack *lst)
{
	t_stack *temp;

	temp = lst;
	while (temp)
	{
		printf("%i\n", temp->data);
		temp = temp->next;
	}
}
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
		stack(argc, argv, &a);
	printlst(a);
	printf("-----------\n");
	if (ordered(a))
		return (0);
	index_stack(&a);
	low_number(&a, &b, lstsize(a));
	printlst(a);

	return (0);	
}
