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
    int n;
    int i,j,k,p,q;
    scanf("%d",&n);
    char sex[50][7];
    float height[50],heightofboy[50],heightofgirl[50],temp;
    for(i=0;i<=n-1;i++)
    {
        scanf("%s %f",&sex[i],&height[i]);
    }
    for(i=0,j=0,k=0;i<=n-1;i++)
    {
        if(strcmp(sex[i],"male")==0)
        {
            heightofboy[j]=height[i];
            j++;
        }
        else
        {
            heightofgirl[k]=height[i];
            k++;
        }
    }
    //???????+??
    for(i=0;i<j;i++)
    {
        for(p=0;p<j-i-1;p++)
        {
            if(heightofboy[p]>heightofboy[p+1])
            {
                temp=heightofboy[p];
                heightofboy[p]=heightofboy[p+1];
                heightofboy[p+1]=temp;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%.2f ",heightofboy[i]);
    }
   //???????+??
   for(i=0;i<k;i++)
   {
       for(q=0;q<k-i-1;q++)
       {
           if(heightofgirl[q]<heightofgirl[q+1])
           {
               temp=heightofgirl[q];
               heightofgirl[q]=heightofgirl[q+1];
               heightofgirl[q+1]=temp;
           }
       }
   }
   for(i=0;i<k-1;i++)
    {
        printf("%.2f ",heightofgirl[i]);
    }
    printf("%.2f",heightofgirl[k-1]);
}
