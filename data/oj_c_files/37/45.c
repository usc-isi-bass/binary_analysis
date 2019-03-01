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

// 1011171.cpp : Defines the entry point for the console application.
//

int main(int argc, char* argv[])

{
	char string[100000];
	int i,j,k,flag,t;
	scanf("%d\n",&t);
	for (k=1;k<=t;k++){	
		gets(string);
	for(i=0;string[i]!='\0';i++)
	
	{	
		flag=1;
		for(j=0;string[j]!='\0';j++)
			if (i!=j)
				if(string[i]==string[j]){
					flag=0;
	                break;
				}
	    if(flag)
		{
		  printf("%c\n",string[i]);
	      break;
		}
	}

	if(!flag)
		printf("no\n");
	}
	return 0;
}
