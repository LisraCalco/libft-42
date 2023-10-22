/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:26:27 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/22 19:27:51 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi( const char * theString )
{
    int i;
    int result;
    int isNegative;

    i = 0;
    result = 0;
    isNegative = 0;
    while (theString[i] == ' ' || theString[i] == '\t' || theString[i] == '\n' || theString[i] == '\v' || theString[i] == '\f' || theString[i] == '\r')
        i++;
    if (theString[i] == '-')
        isNegative = 1;
    if (theString[i] == '-' || theString[i] == '+')
        i++;
    while (theString[i] >= '0' && theString[i] <= '9')
    {
        result = result * 10 + (theString[i] - '0');
        i++;
    }
    if (isNegative == 1)
        return (-result);
    return (result);
}