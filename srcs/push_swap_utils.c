/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:12:09 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 14:08:13 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_doublon(char **list)
{
	int i;
	int j;
	
	i = len_list(list) - 1;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_atoi(list[i]) == ft_atoi(list[j]))
				return (1);
			j--;
		}
		i--;
	}
	return (0);
}

int	is_number(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

char **treat_list(char** argv, int argc)
{
	int i;
	int j;
	char **list_a;

	i = 1;
	list_a = malloc(sizeof(char**) * argc);
	while (argv[i])
	{
		j = i - 1;
		list_a[j] = argv[i];
		i++;
	}
	return (list_a);
}

int	len_list(char **list)
{
	int i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

int	smallest(char **list)
{
	int save_index;
	int smallest;
	int i;

	i = 0;
	save_index = 0;
	smallest = ft_atoi(list[0]);
	while (list[i])
	{
		if (ft_atoi(list[i]) < smallest)
		{
			smallest = ft_atoi(list[i]);
			save_index = i;
		}
		i++;
	}
	return (save_index);
}
