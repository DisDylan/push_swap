/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:43:47 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 14:05:54 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(char **argv, int argc)
{
	int error;
	int i;

	i = 1;
	error = 0;
	if (argc == 1)
		error = 1;
	if (is_doublon(argv))
		error = 1;
	while (i < argc)
	{
		if (!(is_number(argv[i])))
			error = 1;
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			error = 1;
		i++;
	}
	if (error == 1)
		ft_putstr("Error\n");
	return (error);
}

int	is_sorted(char **argv, int argc)
{
	int i;

	i = 2;
	if (argc == 2)
		return (1);
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int *listA;
	int *listB;

	i = 1;
	if (ft_error(argv, argc))
		return (0);
	if (is_sorted(argv, argc))
		return (0);
	listA = malloc(sizeof(int*) * argc);
	listB = malloc(sizeof(int*) * argc);
	treat_list(argv, listA);
	sort_list(listA, listB);
	int c = 0;
	while (c < len_list(listA))
	{
		printf("%d,", listA[c]);
		c++;
	}
}

void	sort_list(int *listA, int *listB)
{
	int len;
	int index;

	len = len_list(listA);
	while (len > 2)
	{
		index = smallest(listA);
		if (index > (len / 2))
		{
			while (index != len - 1)
			{
				rra(listA);
				index++;
			}
			rra(listA);
		}
		else
			while (index != 0)
			{
				ra(listA);
				index--;
			}
		pb(listA, listB);
		len--;
	}
	if (listA[0] > listA[1])
		sa(listA);
	while (listB[0])
		pa(listA, listB);
}
