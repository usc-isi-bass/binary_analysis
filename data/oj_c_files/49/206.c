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

char s[500];
void huiwen(int n,int l)
{
	    int k,i,j,e,sum=0;
		for(k=0;k<l-n+1;k++)
		{
			e=k+n-1;
			for(j=k;j<n/2+k;j++,e--)
			{
			    if(s[j]==s[e]) sum++;
			    if(s[j]!=s[e])
			    {
			    	sum=0;
			    	break;
			    }
			    if(sum==n/2)
			    {
				    for(i=k;i<n+k;i++)
					    cout<<s[i];
				    cout<<endl;
				    sum=0;
			    }
			}
		}
}
int main()
{
     int m,l;
     cin.getline(s,500);
     l=strlen(s);
     for(m=2;m<l;m++)
    	 huiwen(m,l);
     return 0;
}