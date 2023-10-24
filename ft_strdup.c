/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:43:09 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/24 13:41:58 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

char    *ft_strdup( const char * source )
{
    char *dest;
    int i;
    i = 0;
    if (source[0] == '\0')
    {
        i++;
        dest = malloc(sizeof(char) * (i));
        if (dest == NULL)
            return (NULL);
        dest[0] = '\0';
        return (dest);
    }
    while (source[i])
        i++;

    dest = malloc(sizeof(char) * (i + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (source[i])
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
