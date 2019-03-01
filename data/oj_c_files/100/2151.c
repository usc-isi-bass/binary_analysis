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
	char p[300],j;
	int b,i,a=0;
	scanf("%s",&p);
	for(i=0;p[i]!='\0';i++){
		if((p[i]>='A'&&p[i]<='Z')||(p[i]>='a'&&p[i]<='z')){
			a++;
		}
	}
	if(a==0){
		printf("No");
	}
	else{
		for(j='A';j<='Z';j++)
		{
			b=0;
			for(i=0;p[i]!='\0';i++)
			{
				
				if(p[i]==j)
				{
					b++;
				}
			}
			
			if(b!=0)
			{
				printf("%c=%d\n",j,b);
			}
		}
        for(j='a';j<='z';j++)
		{
			b=0;
			for(i=0;p[i]!='\0';i++)
			{
				
				if(p[i]==j)
				{
					b++;
				}
			}
			
			if(b!=0)
			{
				printf("%c=%d\n",j,b);
			}
		}

	}
	return 0;
}
