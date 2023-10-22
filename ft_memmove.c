/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:52:14 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/22 18:19:19 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (destination == NULL && source == NULL)
		return (NULL);
	if (destination > source)
	{
		while (size > 0)
		{
			size--;
			((unsigned char *)destination)[size]
				= ((unsigned char *)source)[size];
		}
	}
	else
	{
		while (i < size)
		{
			((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
			i++;
		}
	}
	return (destination);
}
