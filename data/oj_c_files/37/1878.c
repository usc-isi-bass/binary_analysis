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
    int t,i,j,k,p,l;
    char a[10][100000]={'\0'};
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%s",a[i]);
    for(p=0;p<t;p++)
    {
        l=strlen(a[p]);        
        for(i=0;i<l;i++)
        {
            k=1;
            for(j=0;j<l;j++)
            {
                if (a[p][i]!=a[p][j])
                k++;
            }
            if (k==l)
            {
                printf("%c\n",a[p][i]);
                break;
            }
        }
        if (i==l)
        printf("no\n");
    }
    
}