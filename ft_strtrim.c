/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:16:28 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/24 15:51:55 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    
    while (ft_strchr(set, *s1) && *s1)
        s1++;
    i = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[i]) && i >= 0)
        i--;
    return (ft_substr(s1, 0, i + 1));
}
