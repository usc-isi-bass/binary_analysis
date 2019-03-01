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

int main ()
{   int i,j,k,num,a[16],c;
    while (1)
    { i=0;num=0;
    do
        {scanf("%d",&a[i]);c=a[i];i++;}
        while(c!=0&&c!=-1);


        if(a[0]==-1)break;

        for(j=0;j<i-1;j++)
           {for(k=0;k<i-1;k++)
            if(a[j]==2*a[k]) num++;}

            printf("%d\n",num);

    }return 0;
}
