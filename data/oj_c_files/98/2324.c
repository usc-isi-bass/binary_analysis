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

struct words
{
     int len;
     char word[20];
};
int main()
{
   int n,i,size,count=0;;
   struct words *a;
   scanf("%d",&n);
   a=(struct words *)malloc(sizeof(struct words)*n);
   for (i=0;i<n;i++)
   {
       size=0;
       scanf("%s",&(a+i)->word);
       for (size=0;(a+i)->word[size]!='\0';size++);
       (a+i)->len=size;
    }
    count=0;
    for (i=0;i<n;i++)
     {
         if (count+(a+i)->len+1>80)
         {
             printf("\n");
             count=0;
             i--;
         }
         else
         {
            if (count==0)
            {
                printf("%s",(a+i)->word);
                count=count+(a+i)->len;
            }
            else
            {
                printf(" %s",(a+i)->word);
                count=count+(a+i)->len+1;
            }
         }
    }
}
