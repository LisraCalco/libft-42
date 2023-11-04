/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:32:12 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:29:59 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	if (length == 0)
		return (0);
	while (*first && *second && *first == *second && length > 1)
	{
		first++;
		second++;
		length--;
	}
	return ((unsigned char) *first - (unsigned char) *second);
}
