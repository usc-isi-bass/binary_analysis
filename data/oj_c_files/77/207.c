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

int flag[100]={0};
void pailie(char b[100],int l)
{
	int i,j;
	int g=0;
	if(flag[l-1]==1);
        else
	{
	   for(i=0,g=0;i<l;i++)
	   {
		if(flag[i]==1) continue;
		for(j=i+1;j<l;j++)
		{
			if(flag[j]==1) continue;
			if(b[i]!=b[j])
			{
				cout<<i<<' '<<j<<endl;
				flag[j]=1;
				g=1;
				flag[i]=1;
				break;
			} 
			else break;
	   	}
		if(g==1) break;
	    }
	pailie(b,l);
	}
}
int main ()
{
	char a[100];
	int i,len;
	cin.getline(a,100);
	len = strlen(a);
	pailie(a,len);
	return 0;
} 