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

void main()
{
char a[300],alph[26][300];
int i,n,j,times,flag=0;
char b;


gets(a);
n=strlen(a);



    for(i=0;i<26;i++)
        for(j=0;j<300;j++)
            alph[i][j]=0;


    for(i=0;i<n;i++)
	{
         
          if(a[i]>='a'&&a[i]<='z') 
		  {
			  times=0;
             flag++;
             for(j=0;j<n;j++)
			 {
                if(a[i]==a[j]&&times==0)
				{
                    times++;b=a[i];
				}
			else if(a[i]==a[j]&&times>=1){ times++;a[j]=' ';}
             }   
			alph[b-97][times]=b;
		  }
		   
	}
	if(flag>0)
    for(i=0;i<26;i++)
        for(j=0;j<300;j++)
            if(alph[i][j]>='a'&&alph[i][j]<='z') 
				printf("%c=%d\n",alph[i][j],j);
if(flag==0) printf("No\n");
}

