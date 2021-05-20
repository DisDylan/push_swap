/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoinsu <dpoinsu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:09:35 by dpoinsu           #+#    #+#             */
/*   Updated: 2021/05/20 19:30:14 by dpoinsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char		**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	nb_words;
	char	**tab;

	nb_words = 0;
	tab = NULL;
	i = 0;
	if (s && ((tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				tab[nb_words++] = ft_substr(s, start, end - start);
		}
		tab[nb_words] = 0;
	}
	return (tab);
}
