/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:34:21 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 12:16:03 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *listA)
{
	int save;

	save = listA[0];
	listA[0] = listA[1];
	listA[1] = save;
	ft_putstr("sa\n");
}

void	rra(int *listA)
{
	int save;
	int i;
	
	save = listA[len_list(listA) - 1];
	i = len_list(listA) - 1;
	while (i > 0)
	{
		listA[i] = listA[i - 1];
		i--;
	}
	listA[i] = save;
	ft_putstr("rra\n");
}

void	ra(int *list)
{
	int save;
	int i;

	save = list[0];
	i = 0;
	while (i < len_list(list) - 1)
	{
		list[i] = list[i + 1];
		i++;
	}
	list[i] = save;
	ft_putstr("ra\n");
}

void	pb(int *listA, int *listB)
{
	int len;

	len = len_list(listB);
	while (len > 0)
	{
		listB[len] = listB[len - 1];
		len--;
	}
	listB[len] = listA[len];
	while (len < len_list(listA))
	{
		listA[len] = listA[len + 1];
		len++;
	}
	ft_putstr("pb\n");
}

void	pa(int *listA, int *listB)
{
	int len;

	len = len_list(listA);
	while (len > 0)
	{
		listA[len] = listA[len - 1];
		len--;
	}
	listA[len] = listB[len];
	while (len < len_list(listB))
	{
		listB[len] = listB[len + 1];
		len++;
	}
	ft_putstr("pa\n");
}
