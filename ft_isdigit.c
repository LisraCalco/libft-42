/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:05:20 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/16 15:05:49 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int character)
{
    if (character >= '0' && character <= '9')
        return 1;
    return 0;
}