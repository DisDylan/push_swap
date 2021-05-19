/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:43:47 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 09:29:07 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int *listA;
	int *listB;

	i = 1;
	if (argc == 1)
		return (0);
	if (is_doublon(*argv))
		return (0);
	while (i < argc)
	{
		if (argv[i] < INT_MIN || argv[i] > INT_MAX)
			return (0);
		if (!(is_number(argv[i])))
			return (0);
	}
	listA = malloc(sizeof(int*) * argc);
	listB = malloc(sizeof(int*) * argc);
	treat_list(*argv, *listA);
	sort_list(listA, listB);
}

void	sort_list(int *listA, int *listB)
{
	int len;
	int index;

	len = list_len(listA);
	while (len > 2)
	{
		index = smallest(listA);
		if (index > (len / 2))
		{
			while (index != len)
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
