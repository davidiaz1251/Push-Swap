/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiaz-ra <ldiaz-ra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:27:34 by ldiaz-ra          #+#    #+#             */
/*   Updated: 2024/01/24 10:18:36 by ldiaz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = 1;
	i[3] = 0;
	while ((str[i[0]] >= 9 && str[i[0]] <= 13) || str[i[0]] == 32)
		i[0]++;
	while (str[i[0]] == '+' || str[i[0]] == '-')
	{
		if (i[1] >= 1)
			return (0);
		if (str[i[0]] == '-')
			i[2] = -1;
		i[1]++;
		i[0]++;
	}
	while (str[i[0]] && (str[i[0]] >= '0' && str[i[0]] <= '9'))
	{
		i[3] = i[3] * 10 + (str[i[0]] - '0');
		i[0]++;
	}
	return (i[2] * i[3]);
}
