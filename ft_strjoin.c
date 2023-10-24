/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:11:48 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/24 15:14:40 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *newStr;
    newStr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (newStr == NULL)
        return (NULL);
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        newStr[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        newStr[i] = s2[j];
        i++;
        j++;
    }
    newStr[i] = '\0';
    return (newStr);
}
