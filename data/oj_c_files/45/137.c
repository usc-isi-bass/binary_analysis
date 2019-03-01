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
	char s[50], w[50];
	scanf("%s %s",s,w);
	char*p,*l,*t;
	int m,n;
	
	int k=0;
	for(t=s;*t!='\0';t++)
	{
		k++;
	}
	n=0;m=0;
	for(l=w;*l!='\0';l++&&n++)
	{

		for(p=s;*p!='\0'&&*l!='\0'&&*l==*p;p++&&l++)
		{
			m++;
		}
		
	
		if(m==k)
		{
			
			printf("%d",n);
			break;
		}
	
	}



	

	
	return 0;
}