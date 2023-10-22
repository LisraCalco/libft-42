/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:32:12 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/22 18:35:22 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp( const char * first, const char * second, size_t length )
{
    if ( length == 0 ) 
        return 0;
    while (*first && ( *first == *second ) && length > 1 )
    {
        ++first;
        ++second;
        --length;
    }
    return *(unsigned char *)first - *(unsigned char *)second;
}