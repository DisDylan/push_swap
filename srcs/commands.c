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

void	sa(char **list_a)
{
	char *save;

	save = list_a[0];
	list_a[0] = list_a[1];
	list_a[1] = save;
	ft_putstr("sa\n");
}

void	rra(char **list_a)
{
	char	*save;
	int		i;

	save = list_a[len_list(list_a) - 1];
	i = len_list(list_a) - 1;
	while (i > 0)
	{
		list_a[i] = list_a[i - 1];
		i--;
	}
	list_a[i] = save;
	ft_putstr("rra\n");
}

void	ra(char **list)
{
	char	*save;
	int		i;

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

void	pb(char **list_a, char **list_b)
{
	int len;

	len = len_list(list_b);
	while (len > 0)
	{
		list_b[len] = list_b[len - 1];
		len--;
	}
	list_b[len] = list_a[len];
	while (len < len_list(list_a))
	{
		list_a[len] = list_a[len + 1];
		len++;
	}
	ft_putstr("pb\n");
}

void	pa(char **list_a, char **list_b)
{
	int len;

	len = len_list(list_a);
	while (len > 0)
	{
		list_a[len] = list_a[len - 1];
		len--;
	}
	list_a[len] = list_b[len];
	while (len < len_list(list_b))
	{
		list_b[len] = list_b[len + 1];
		len++;
	}
	ft_putstr("pa\n");
}
