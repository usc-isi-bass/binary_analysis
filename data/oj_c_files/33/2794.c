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


int main(int argc, char* argv[])
{
	int n;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   
		char a[255];
		
		scanf("%s",a);
		int len=strlen(a);
		
		for(int j=0;j<len;j++)
		{
			if(a[j]=='A')
			{
				a[j]=a[j]+19;
			}
			else if(a[j]=='T')
			{

				a[j]=a[j]-19;
			}
			else if (a[j]=='C')
			{
				a[j]=a[j]+4;
			}
            else if (a[j]=='G')
			{
				a[j]=a[j]-4;
			}
			
		}puts(a);
		
		
	}
	
	return 0;
}