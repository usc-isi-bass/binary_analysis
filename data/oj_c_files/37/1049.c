#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void fun(char data[])
{
     int freq[26];
     int i;
     for(i = 0; i <= 25; i++)
           freq[i] = 0;
           
     int len = strlen(data);
     
     for(i = 0; i <= len - 1; i++)
           *(freq + *(data + i) - 'a') = *(freq + *(data + i) - 'a') + 1;
     
     int count = 0;
     for(i = 0; i <= len - 1; i++)
     {
           if(*(freq + *(data + i) - 'a') == 1)
           {
                     printf("%c\n", *(data + i));
                     count = 1;
                     break;
           }
     }
     if(count == 0)
     printf("no\n");
}
             
           
     

int main()
{
    int n;
    scanf("%d\n", &n);
    int i;
    char data[100001];
    for(i = 1; i <= n; i++)
    {
          gets(data);
          fun(data);
    }

    return 0;
}

