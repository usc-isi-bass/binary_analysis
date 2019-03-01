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

int main()
{
    int n,i,wl,len=0;
    char w[64],p[64]="";
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         printf(p);
         scanf("%s",w);
         wl=strlen(w);
         if(len+wl>80)
         {
             printf("\n");
             len=0;
         }
         else if(i>0)
         {
              printf(" ");
         }
         len+=wl+1;
         strcpy(p,w);
    } 
         printf(p);
         getchar();
         getchar();
         getchar();
         return 0;
} 
     