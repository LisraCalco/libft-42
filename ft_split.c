/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:20:26 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:29:29 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free_tab(char **tab, int k)
{
	while (k-- > 0)
		free(tab[k]);
	free(tab);
	return (NULL);
}

int	loop_string(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		k;
	int		start;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			i = loop_string(s, c, i);
			tab[k] = ft_substr(s + start, 0, i - start);
			if (!tab[k++])
				return (ft_free_tab(tab, k));
		}
		else
			i++;
	}
	tab[k] = NULL;
	return (tab);
}
