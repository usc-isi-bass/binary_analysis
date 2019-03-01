/*
 * =====================================================================================
 *
 *       Filename:  atoi.c
 *
 *    Description:  change string to int
 *
 *        Version:  1.0
 *        Created:  2016/06/04 19时46分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <ctype.h>


int my_atoi(char s[]) {
    int i, n, sign;

    for  (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;

}