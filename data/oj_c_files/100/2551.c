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

int time[200];
char word[400];
int len;
int main()
{
    int i,flag=1,y=1;
    gets(word);
    len=strlen(word);
    for(i=0;i<len;i++)
    time[word[i]]++;
    for(i='A';i<='z';i++)
    {
                         if((i<='Z'||i>='a')&&time[i]!=0)
                         {
                                                         if(y==0)
                                                         printf("\n");
                                                         y=0;
                                                         printf("%c=%d",i,time[i]);
                                                         flag=0;
                         }
     }
     if(flag==1)
     printf("No");
     
     return 0;
}
