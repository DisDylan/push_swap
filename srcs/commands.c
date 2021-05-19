/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:34:21 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 14:15:38 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(char **listA)
{
	char *save;

	save = listA[0];
	listA[0] = listA[1];
	listA[1] = save;
	ft_putstr("sa\n");
}

void	rra(char **listA)
{
	char *save;
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

void	ra(char **list)
{
	char *save;
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

void	pb(char **listA, char **listB)
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

void	pa(char **listA, char **listB)
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
