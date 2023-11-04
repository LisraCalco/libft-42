/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:44:37 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:44 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	char	*memory_block_casted;

	memory_block_casted = (char *)memory_block;
	while (size--)
	{
		if (*memory_block_casted == (char)searched_char)
			return (memory_block_casted);
		memory_block_casted++;
	}
	return (NULL);
}
