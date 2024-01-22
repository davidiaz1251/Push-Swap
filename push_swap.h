/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:22:10 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/22 12:46:50 by ldiaz-ra         ###   ########.fr       */
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
	int index;
	struct s_stack	*next;
}	t_stack;

t_stack	*lstnew(int content);
t_stack	*lstlast(t_stack *lst);
int		lstsize(t_stack *lst);
int		lstcheck(t_stack *lst, char *value);
int		check_letter(char *value);
int		low_number(t_stack **a, t_stack **b, int len);
int		max_list(t_stack *stack);
int		min_list(t_stack *stack_a);
int		ordered(t_stack *stack_a);
void	lstadd_back(t_stack **lst, t_stack *new);
void	free_memory(char **memory);
void	ft_error();
void	swap(t_stack **lst, char *str);
void	swap_ss(t_stack **stack_a, t_stack **stack_b);
void	push_stack(t_stack **stack_from, t_stack **stack_to, char *str);
void	rotate(t_stack **stack, char *str);
void	rotate_reverse(t_stack **stack, char *str);
void	rotate_rrr(t_stack **stack_a, t_stack **stack_b);
void	algorithm(t_stack **a, t_stack **b, int len);
void	index_stack(t_stack **a);

#endif