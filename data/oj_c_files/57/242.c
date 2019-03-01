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
        int n,i,j;
        char a[100][100],b[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
            b[i]=strlen(a[i]);
            //printf("%d\n",b[i]);

        }
        for(i=0;i<n;i++)
        {
            if(a[i][b[i]-1]=='r')
            {
                for(j=0;j<b[i]-2;j++)
                printf("%c",a[i][j]);
                printf("\n");
				continue;
            }
            else if(a[i][b[i]-1]=='y')
            {for(j=0;j<b[i]-2;j++)
             printf("%c",a[i][j]);
              printf("\n"); 
			continue;
			}
            else if(a[i][b[i]-1]=='g');
             {for(j=0;j<b[i]-3;j++)
                printf("%c",a[i][j]);
			   printf("\n");
			   continue;
			 }
            //printf("\n");
        }
        return 0;
}
