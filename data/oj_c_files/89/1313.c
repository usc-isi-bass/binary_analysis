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
    int n,i,j,*p,*q;
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    q=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        *(p+i)=0;
        *(q+i)=0;
    for(;;)
        {   scanf("%d %d",&i,&j);
            if(i==0&&j==0)
                break;
            if(*(p+i)!=1)
                *(p+i)=1;
            *(q+j)=*(q+j)+1;
            }
    //for(i=0;i<n;i++)
       //printf("%d %d\n",*(p+i),*(q+i));
    for(i=0;i<n;i++)
        {   if(*(p+i)==0&&*(q+i)==n-1)
                {   printf("%d",i);
                    break;}
            if(i==n-1)
                printf("NOT FOUND");
                        }
    


    }