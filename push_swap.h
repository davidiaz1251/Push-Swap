/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:22:10 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2023/12/18 18:35:03 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SAWP_H
# define PUSH_SAWP_H
# include "./Libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int	data;
	struct s_stack	*next;
}	t_stack;

t_stack	*lstnew(int content);
t_stack	*lstlast(t_stack *lst);
void	lstadd_back(t_stack **lst, t_stack *new);
void	free_memory(char **memory);
void	ft_error();
int		lstsize(t_stack *lst);
int		lstcheck(t_stack *lst, char *value);
int		check_letter(char *value);
void	swap_sa(t_stack **lst);

#endif