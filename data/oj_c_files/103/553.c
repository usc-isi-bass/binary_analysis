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

main()
{
int i=0,j=0,k=0;
int s[26];      

char out[1001];
scanf("%s",out);
for(k=0;k<strlen(out);)
{
    if(out[k]<='z' && out[k]>='a')
    {out[k]=out[k]-'a'+'A';}
    k++;
    }

for(i=0;i<strlen(out);i++)
   { while(out[i]==out[i+1])
     {j++;
     i++;}                  
      
    printf("(%c,%d)",out[i],j+1);
    j=0;
    
      }
            }
