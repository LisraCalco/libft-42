/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:44:37 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/22 18:49:53 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
    char *memoryBlockCasted = (char *)memoryBlock;
    while ( size-- )
    {
        if ( *memoryBlockCasted == (char)searchedChar )
            return memoryBlockCasted;
        ++memoryBlockCasted;
    }
    return NULL;
}
