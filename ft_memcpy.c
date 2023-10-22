/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:38:10 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/20 14:57:36 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy( void *destination, const void *source, unsigned int size )
{
	char			*dst;
	const char		*src;
	unsigned int	i;

	dst = destination;
	src = source;
	i = 0;
	if (destination == 0 && source == 0)
		return (0);
	while (i < size)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	return (destination);
}
