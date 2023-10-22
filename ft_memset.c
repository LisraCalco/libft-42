/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:36:07 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/19 12:34:07 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *pointer, int value, unsigned int count)
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
