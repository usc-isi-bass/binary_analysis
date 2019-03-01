/*
 *Name:         Read String
 *Author:       Junjie Zhang
 *Date:         Aug 03rd,2014
 *Version:      1.0
 */

#include <stdio.h>

int ReadString(char str[],int n)
{
    int ch = 0;
    int i = 0;

    /*  argument can't be NULL  */
    if( str == NULL)
    {
        return -1;
    }

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}