/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 22:26:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/02 22:36:49 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h> 

char    *ft_itoa(int nbr)
{
    char *res;
    res = (char *)malloc(sizeof(char) * 11);
    int i = 1;
    int temp = 0;

    while (nbr != 0)
    {
        res[i] = (nbr % 10) - '0';
        nbr = nbr / 10;
        i++;
    }
    res[i] = '\0';

    return (res);
}