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
       char s[500];
	   int length,l,i,j,p,k;
	   cin>>s;
	   length=strlen(s);
	   for(l=2;l<=length;l++)
          for(i=0;i<length-l+1;i++)
		  {
			int flag=0;
			for(j=i,p=1;j<l/2+i;j++)
			{
                 if(s[j]!=s[j+l-p])
				{
					flag=1;
					break;
				}
				else
					p+=2;
			}
			if(flag==0)
			{
				for(k=i;k<i+l;k++)
					cout<<s[k];
				cout<<endl;
			} 
		  }
		  return 0;
}
