/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:32:04 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/23 16:17:35 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t elementCount, size_t elementSize)
{
    void *ptr;
    ptr = malloc(elementCount * elementSize);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, elementCount * elementSize);
    return (ptr);
}
