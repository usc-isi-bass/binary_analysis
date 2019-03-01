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
int n,a,b,i,a1=0,b1=0,c1=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
                scanf("%d %d",&a,&b);
                if((a<b&&(b-a)==1)||(a>b&&(a-b)==2))
                a1++;
                else if(a==b) c1++;
                else b1++;
                }
                if(a1>b1)
                printf("A");
                else if(a1<b1)
                printf("B");
                  else
                  printf("Tie");
                                    }
                
                
