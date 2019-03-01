/*
 ****************************************************************
 *                              *
 *          atol.c                  *
 *                              *
 *  Converte cadeias decimais para n�meros inteiros     *
 *                              *
 *  Vers�o  1.0.0, de 29.09.86              *
 *      3.0.0, de 08.07.95              *
 *                              *
 *  M�dulo: atol                        *
 *      libc/stdio                  *
 *      Categoria B                 *
 *                              *
 *  TROPIX: Sistema Operacional Tempo-Real Multiprocessado  *
 *      Copyright � 2000 NCE/UFRJ - tecle "man licen�a" *
 *                              *
 ****************************************************************
 */

#include <stdlib.h>

/*
 ****************************************************************
 *  Converte cadeias decimais para n�meros inteiros     *
 ****************************************************************
 */
long
atol (register const char *str)
{
    register char   c;
    register long   n;
    register short  sign;

    /*
     *  Ignora os brancos iniciais
     */
    while ((c = *str) == ' ' || c == '\t')
        str++;

    /*
     *  Verifica se foi dado sinal
     */
    if (c == '+' || c == '-')
        { sign = (c == '-'); str++; }
    else
        sign = 0;

    /*
     *  Ignora zeros iniciais
     */
    while ((c = *str) == '0')
        str++;

    /*
     *  Realiza a Convers�o
     */
    n = 0;

    while ((c = *str++) >= '0' && c <= '9')
    {
        n = (n << 3) + (n << 1) + (c & 0xF);
    }

    return (sign ? -n : n);

}   /* end atol */