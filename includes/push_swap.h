/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:13:07 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/19 14:21:45 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

void	sort_list(char **listA, char **listB);
int	is_doublon(char **list);
int	is_number(char *str);
void	treat_list(char **argv, char **listA);
int	len_list(char **list);
int	smallest(char **list);
void	sa(char **listA);
void	rra(char **listA);
void	ra(char **list);
void	pb(char **listA, char **listB);
void	pa(char **listA, char **listB);
void	ft_putstr(char *s);
int	ft_isdigit(int c);
long	ft_atoi(const char *str);
int	is_sorted(char **argv, int argc);

#endif
