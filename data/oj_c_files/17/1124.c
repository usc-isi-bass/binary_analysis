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
    char a[100],s;
    int i,j,k,l,m,n,t,b[100],c[100];
    for (;;)
    {
        gets(a);
        if(a[0]=='\n')
        break;
        n=strlen(a);
        for(i=0,j=0,k=0;i<n;i++)
        {
            if(a[i]=='(')
            {
                b[j]=i;
                j++;
            }
            else if(a[i]==')')
            {
                c[k]=i;
                k++;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            for (l=j-1;l>=0;l--)
            {
                if (b[l]==i)
                {
                    for (t=0;t<k;t++)
                    {
                        if (c[t]>i)
                        {
                            b[l]=-1;
                            c[t]=-1;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        printf("%s\n",a);
        for(i=0;i<n;i++)
        {
            for (l=0;l<j;l++)
            {
                if(b[l]==i)
                {
                    printf("$");
                    break;
                }
            }
            if(l!=j)
            continue;
            for (t=0;t<k;t++)
            {
                if(c[t]==i)
                {
                    printf("?");
                    break;
                }
            }
            if(t!=k)
            continue;
            printf(" ");
        }

     printf("\n");
     a[0]='\n';
    }
}
