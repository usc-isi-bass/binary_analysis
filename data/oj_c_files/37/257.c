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
        int t,i,j,k,h,s,n=0;
    char m[100][10000],b[100];
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {   
                scanf("%s",m[i]);
                n=0;
               h=strlen(m[i]);
                for(j=0;j<=h-1;j++)
                {
                        n=0;
                        for(k=0;k<=h-1;k++)
                        {                                
                                if((m[i][j]==m[i][k])&&(j!=k))
                                {
                                        n=1;break;
                                }
                        
                        }
                    if(n==0)
                        {
                                b[i]=m[i][j];
                                 break;
                        }
                    
                }
                if(n==1)
                        {
                             b[i]=1;
                        }
        }
        for(s=0;s<=t-1;s++)
        {
                if(b[s]==1)
                {
                        printf("no\n");
                }
                else 
                {
                        printf("%c\n",b[s]);
                }
        }
        return 0;
}
