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
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	    {
		char a[100001]={0};
		scanf("%s",a);
		int len=strlen(a);
		int q=0;
		for(int j=0;j<len;j++)
		    {
			int judge=1;
			for(int k=0;k<len;k++)
			    {
				if(j!=k)
				{
				if(a[j]==a[k])
				   {
					judge=0;
					break;	
				   }		
				}
				}	
			if(judge==1)
			    {
			    printf("%c\n",a[j]);
			    q=1;
			    break;		
			    }
			}
		if(q==0)
		   printf("no\n");
		}
}