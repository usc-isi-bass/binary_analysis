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
int n,i;
int a,b;
int * temp, * temp2;
scanf("%d",&n);
int *p = (int *)malloc(n*sizeof(int));
int *q = (int *)malloc(n*sizeof(int));
temp = p;
temp2 = q;
for (i=0;i<n;i++)
    {*(p+i) = 0; *(q+i) = 0;}
while(1==1)
    {
        p = temp;
        q = temp2;
        scanf("%d %d",&a,&b);
        if (a != 0 || b != 0)
           {
                 (*(p+a))++;
                 (*(q+b))++;
                 }
        else 
             break;
        }
for (i=0;i<n;i++)
{
    if (*(p+i)==0 && *(q+i)==n-1)
       {printf("%d",i);break;}
    }
if (i==n) printf("NOT FOUND\n");
    }
