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
	char s[51]={0},w[51]={0},compare[51]={0};
	int i,output,j,t;
	scanf("%s%s",&s,&w);
	for(i=0;i<=(strlen(w)-strlen(s));i++)
	{
		for(j=0,t=i;j<strlen(s);j++,t++)
		{
			compare[j]=w[t];
		}
		if(strcmp(compare,s)==0)
		{
			printf("%d\n",i);
			break;
		}
	}
    return 0; 
} 