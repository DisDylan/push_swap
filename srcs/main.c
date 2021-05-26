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

int	ft_error(char **argv)
{
	int error;
	int i;

	i = 1;
	error = 0;
	if (is_doublon(argv))
		error = 1;
	while (i < len_list(argv) - 1)
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
	int *list_a;
	int *list_b;

	i = 1;
	if (argc == 1)
		return (0);
	if (argc == 2 && is_number(argv[1]))
		return (0);
	else
		//treat_arg(argv, list_a); // malloc via split
		treat_list(argv, list_a); // malloc dedans
	if (ft_error(list_a))
		return (0);
	if (is_sorted(argv, argc))
		return (0);
	list_b = malloc(sizeof(int*) * argc);
	sort_list(list_a, list_b);
	int c = 0;
	while (c < len_list(list_a))
	{
		printf("%d,", list_a[c]);
		c++;
	}
}

void	sort_list(int *list_a, int *list_b)
{
	int len;
	int index;

	len = len_list(list_a);
	while (len > 2)
	{
		index = smallest(list_a);
		if (index > (len / 2))
		{
			while (index != len - 1)
			{
				rra(list_a);
				index++;
			}
			rra(list_a);
		}
		else
			while (index != 0)
			{
				ra(list_a);
				index--;
			}
		pb(list_a, list_b);
		len--;
	}
	if (list_a[0] > list_a[1])
		sa(list_a);
	while (list_b[0])
		pa(list_a, list_b);
}
