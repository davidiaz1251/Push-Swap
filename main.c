/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:20:28 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/12 11:21:49 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_stack(char *str, t_stack **a)
{
	char	**split;
	int		i;

	split = ft_split(str, ' ');
	i = -1;
	while (split[++i])
	{
		if (lstcheck(*a, ft_atoi(split[i])))
			ft_error("Error\n");
		lstadd_back(a, lstnew(ft_atoi(split[i])));
	}
	free_memory(split);
}

void	stack(int argc, char **argv, t_stack **a)
{
	int	i;

	i = 0;
	while (argc - (++i) >= 1)
	{
		if (ft_strlen(argv[i]) > 1)
			split_stack(argv[i], a);
		else
		{
			if (lstcheck(*a, ft_atoi(argv[i])))
				ft_error("Error\n");
			lstadd_back(a, lstnew(ft_atoi(argv[i])));
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 2)
		split_stack(argv[1], &a);
	else if (argc > 2)
		stack(argc, argv, &a);
	while (a)
	{
		printf("%i", a->data);
		a = a->next;
	}
	
	return (0);	
}
