/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:35:57 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/19 12:24:36 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}