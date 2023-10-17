/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:21:47 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/16 15:42:22 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') || (character >= '0' && character <= '9'))
        return 1;
    return 0;
}