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


int main(){
	char w[2000];//??
	char s[2000];
	char m;
	int i,k;
	scanf("%s %s",s,w);
	if (strlen(s)==strlen(w))
	{
		for (i=0;s[i]!='\0';i++)
		{
			for(k=i;w[k]!='\0';k++)
			{
				if (s[i]==w[k])
				{
					m=w[k];
					w[k]=w[i];
					w[i]=m;
					break;
				} 		
			}
		}
		if (strcmp(s,w)==0)
		{
			printf("YES");
		} 
		else
		{
			printf("NO");
		}

	} 
	else
	{
		printf("NO");
	}
	return 0;
}