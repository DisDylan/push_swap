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

int		ft_error(char **argv)
{
	int error;
	int i;

	i = 0;
	error = 0;
	if (is_doublon(argv))
		error = 1;
	while (i < len_list(argv))
	{
		if (!(is_number(argv[i])))
			error = 1;
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			error = 1;
		i++;
	}
	if (error == 1)
	{
		free(argv);
		ft_putstr("Error\n");
	}
	return (error);
}

int		is_sorted(char **argv)
{
	int i;

	i = 1;
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
	if (argc == 1)
		return (0);
	if (argc == 2 && is_number(argv[1]))
		return (0);
	else if (argc == 2 && (!(is_number(argv[1]))))
		list_a = ft_split(argv[1], ' ');
	else
		list_a = treat_list(argv, argc);
	if (ft_error(list_a))
		return (0);
	if (is_sorted(list_a))
	{
		free(list_a);
		return (0);
	}
	list_b = malloc(sizeof(char**) * len_list(list_a));
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
			loop_rra(index, len, list_a);
			if (is_sorted(list_a))
				break ;
		}
		else
			loop_ra(index, list_a);
		if (is_sorted(list_a))
			break ;
		pb(list_a, list_b);
		len--;
	}
	if (ft_atoi(list_a[0]) > ft_atoi(list_a[1]))
		sa(list_a);
	while (list_b[0])
		pa(list_a, list_b);
}
