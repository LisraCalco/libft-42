/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:20:26 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/25 16:34:39 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **tab;
    int i;
    int j;

    i = 0;
    j = 0;
    tab = malloc(sizeof(char *) * 60);
    if (tab == NULL)
        return (NULL);
    while (*s)
    {
        if (*s == c)
        {
            i++;
            j = 0;
        }
        tab[i][j] = s[0];
        j++;
        s++;

    }
    return (tab);
}