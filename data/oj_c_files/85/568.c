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
{
	int i,n,len[1000],m[1000],j,l=0;
	char s[1000][21];
	scanf("%d",&n);

    for(i=0;i<n;i++)
	{	l=0;
		scanf("%s",s[i]);
		len[i]=strlen(s[i]);
		if ((s[i][0]>='A' && s[i][0]<='Z')||(  s[i][0]>='a' && s[i][0]<='z')|| (s[i][0]=='_'))
		{
		  m[i]=0;
		}
                   else m[i]=1;	
        		for(j=1;j<len[i];j++)
		{

       
           if ((s[i][j]>='A' && s[i][j]<='Z')|| ( s[i][j]>='a' && s[i][j]<='z')|| (s[i][j]=='_')||(s[i][j]<='9'&&s[i][j]>='0'))
		   {
		      l++;
		   }
		}
				if(l==len[i]-1 && m[i]==0)
			  printf("yes\n");
		else printf("no\n");
	}
	return 0;
	}
