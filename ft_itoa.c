/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:07:16 by tlegendr          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:35 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int numin)
{
	int	count;

	count = 0;
	if (numin == 0)
		return (1);
	while (numin != 0)
	{
		numin /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int numin)
{
	long	tmp;
	int		len;
	char	*str;

	tmp = numin;
	if (tmp < 0)
		tmp = -tmp;
	len = count_num(numin);
	if (numin < 0)
		len++;
	str = malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	tmp = numin;
	if (tmp < 0)
		tmp = -tmp;
	while (len--)
	{
		str[len] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (numin < 0)
		str[0] = '-';
	return (str);
}
