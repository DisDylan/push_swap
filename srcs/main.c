/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:43:47 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/20 19:29:47 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_error(char **argv, int argc)
{
	int	error;
	int	i;

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

int		is_sorted(char **argv, int argc)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	if (argc == 2)
	{
		/*
		list_a = ft_split(argv[1], ' ');
		while (list_a[j])
			j++;
		argc = j + 1;
		*/
		return (1);
	}
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**list_a;
	char	**list_b;

	i = 1;
	list_a = NULL;
	if (ft_error(argv, argc))
		return (0);
	if (is_sorted(argv, argc))
		return (0);
	list_a = malloc(sizeof(int*) * argc);
	list_b = malloc(sizeof(int*) * argc);
	treat_list(argv, list_a);
	sort_list(list_a, list_b);
	free(list_a);
	free(list_b);
	return (0);
}

void	sort_list(char **list_a, char **list_b)
{
	int len;
	int index;

	len = len_list(list_a);
	while (len > 2)
	{
		index = smallest(list_a);
		if (index > (len / 2))
		{
			while (index++ != len - 1)
				rra(list_a);
			rra(list_a);
		}
		else
			while (index-- != 0)
				ra(list_a);
		if (is_sorted(list_a, 3))
			break ;
		pb(list_a, list_b);
		len--;
	}
	if (list_a[0] > list_a[1])
		sa(list_a);
	while (list_b[0])
		pa(list_a, list_b);
}
