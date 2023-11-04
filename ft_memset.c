/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:36:07 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:31:34 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	char			*ptr;
	unsigned int	i;

	ptr = pointer;
	i = 0;
	while (i < count)
	{
		*ptr = value;
		ptr++;
		i++;
	}
	return (pointer);
}
