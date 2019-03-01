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
    int n,m,num;
    char a[N][N],b[N][N];
    int i,j,r;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]='\0';
            b[i][j]='\0';
        }
    }

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        getchar();
        scanf("%s",a[i]);
        strcpy(b[i],a[i]);
    }

    scanf("%d",&m);

    for(r=1;r<=m-1;r++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='@')
                {
                    if(b[i][j+1]=='.'&&j+1<n)
                    {
                        b[i][j+1]='@';
                    }

                    if(b[i][j-1]=='.'&&j-1>=0)
                    {
                        b[i][j-1]='@';
                    }

                    if(b[i+1][j]=='.'&&i+1<n)
                    {
                        b[i+1][j]='@';
                    }

                    if(b[i-1][j]=='.'&&i-1>=0)
                    {
                        b[i-1][j]='@';
                    }
                }
            }
        }

        for(i=0;i<n;i++)
        {
            strcpy(a[i],b[i]);
        }

        /*for(i=0,num=0;i<n;i++)
        {
            puts(a[i]);
        }
        printf("\n");*/

    }


    for(i=0,num=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(a[i][j]=='@')
          {
            num++;
          }

        }
    }

    printf("%d\n",num);


    return 0;
}