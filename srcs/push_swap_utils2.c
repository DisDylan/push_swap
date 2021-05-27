/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:27:22 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/27 09:32:31 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	loop_rra(int index, int len, char **list_a)
{
	while (index != len - 1)
	{
		rra(list_a);
		index++;
	}
	rra(list_a);
}

void	loop_ra(int index, char **list_a)
{
	while (index != 0)
	{
		ra(list_a);
		index--;
	}
}
