/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:12:09 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 09:34:14 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PUSH_SWAP_H"

int	is_doublon(char** list)
{
	int i;
	int j;
	
	i = 1;
	while (list[i])
	{
		j = i + 1;
		while (list[j])
		{
			if (ft_atoi(list[i]) == ft_atoi(list[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_number(char* str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(ft_is_digit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

void	treat_list(char** argv, int *listA)
{
	int i;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		listA[j] = ft_atoi(argv[i]);
		i++;
	}
}

int	list_len(int *list)
{
	int i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

int	smallest(int *list)
{
	int save_index;
	int smallest;

	save_index = 0;
	smallest = list[0];
	while (list[i])
	{
		if (list[i] < smallest)
		{
			smallest = list[i];
			save_index = i;
		}
		i++;
	}
	return (save_index);
}
