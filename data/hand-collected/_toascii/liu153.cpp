/***************************************************************************    
    >file name:my_atoi.c
    >author:Comedly
    >create time:2016-8-20
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static int i = 0; 
void my_itoa(int n,char s[])
{
    if(n < 10)
    {
        s[i] = n + '0';
    }
    else
    {
        my_itoa(n/10,s);
        i++;
        n = n%10;
        s[i] = n + '0';
    }
    s[i+1] = '\0';
}
