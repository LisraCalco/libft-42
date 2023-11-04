/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:32:04 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:15 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*ptr;

	ptr = malloc(element_count * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, element_count * element_size);
	return (ptr);
}
