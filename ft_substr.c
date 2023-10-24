/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:18:27 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/24 14:52:38 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (s == NULL)
        return (NULL);
    if (start > (unsigned int)ft_strlen(s))
    {
        str = malloc(sizeof(char) * 1);
        str[0] = '\0';
        return (str);
    }
    if (len >= (unsigned int) ft_strlen(s))
        len = ft_strlen(s) - start;
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
