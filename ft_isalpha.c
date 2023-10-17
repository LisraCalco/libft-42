/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:52:13 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/16 15:01:05 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        return 1;
    return 0;
}