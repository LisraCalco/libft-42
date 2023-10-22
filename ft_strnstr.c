/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:56:53 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/22 19:19:03 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && i + j < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)big + i);
            j++;
        }
        i++;
    }
    return (0);
}