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

int b;
void main()
{   void PF(int k);
	int a; char n[10];int i,len;

	scanf("%d %s %d",&a,n,&b);
	len=strlen(n);
	int sum=0;
	for(i=0;i<len;i++)
	{
		if(n[i]>='0'&&n[i]<='9')
			sum=sum*a+n[i]-'0';
		else
                    if(n[i]>='a'&&n[i]<='z')
                    sum=sum*a+n[i]-'a'+10;
                else
                     sum=sum*a+n[i]-'A'+10;
	}
	PF(sum);
}

	void PF(int k)
	{
		if(k<b) 
		{
			if(k>=0&&k<=9)
				printf("%c",k+'0');
			else
				printf("%c",k-10+'A');
		}
		else
		{
			PF(k/b);
				if(k%b>=0&&k%b<=9)
				printf("%c",k%b+'0');
			else
				printf("%c",k%b-10+'A');
		}
	}
		    
	




		
	
	


