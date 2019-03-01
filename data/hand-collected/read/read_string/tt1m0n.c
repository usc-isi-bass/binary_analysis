/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_unicode_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 20:19:55 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/26 20:19:56 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>

static unsigned int *ft_intcpy(unsigned int *p, unsigned int *arr)
{
    int i;

    i = 0;
    if (arr == 0)
        return (0);
    while (arr[i] != 0)
    {
        p[i] = arr[i];
        i++;
    }
    p[i] = 0;
    return (p);
}

// static void         write_rez_unicode(char *str, unsigned int *p, char **rez)
// {
//     int     i;
//     char    *del;
//     char    *tmp;

//     i = 0;
//     while (p[i] != 0)
//     {
//         del = *rez;
//         print_unicode(str, p[i], &tmp);
//         if (rez == NULL && i != 0)
//             break ;
//         if (*rez == NULL)
//         {
//             *rez = ft_memalloc(ft_strlen(tmp) + 1);
//             *rez = ft_memcpy(*rez, tmp, ft_strlen(tmp) + 1);
//         }
//         else
//             *rez = ft_strjoin(*rez, tmp);
//         free(tmp);
//         if (del != NULL)
//             free(del);
//         i++;
//     }
// }

void                read_unicode_string(char *str, char **rez, va_list ap)
{
    unsigned int    *p;

    if (!(p = (unsigned int*)malloc(sizeof(int) * 1000000)))
        return ;
    p = ft_intcpy(p, (unsigned int*)va_arg(ap, void*));
    if (p == 0)
    {
        free(p);
        return ;
    }
    if (p[0] == 0)
    {
        if (!(*rez = (char*)malloc(sizeof(char) * 1)))
            return ;
        (*rez)[0] = '\0';
    }
    // write_rez_unicode(str, p, rez);
    free(p);
}