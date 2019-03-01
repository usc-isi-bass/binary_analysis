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
	int alpha[26],t,i, flag = 0,out = 0;
	char a[10001],*p;	

	scanf("%d",&t);

	while(t>0)
	{
		scanf("%s",a);

		for(i=0;i<26;i++)
			alpha[i]=0;

		p = a;

		while(*p != '\0')
		{
			alpha[*p-'a']++;	
			p++;			
		}

		flag=0;  out=0;
		for(p=a;*p!='\0';p++)
		{
			for(i = 0; i < 26 ;i++)
			{
				if( alpha[i]==1 && (*p-'a')==i )
				{
					flag = 1;
					out = 1;
					printf("%c\n", 'a'+i);
					break;
				}
			}
			if(1==out)
				break;
		}

		if(0 == flag)
			printf("no\n");	
		

		t--;
	}
	return 0;
}

