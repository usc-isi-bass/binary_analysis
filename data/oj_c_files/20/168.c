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
	char str[10][11],substr[10][4],output[10][14]={'\0'};
	int maxN=0,i=0,j,end;
	while(scanf("%s %s",str[i],substr[i])!=EOF)
	{
	//	scanf("%s %s",str[i],substr[i]);
		i++;	
	}
	end=i;
	for(i=0;i<end;i++)
	{
		char max=str[i][0],*p;
		p=output[i];
		for(j=0;j<strlen(str[i]);j++)
			if( (int)str[i][j] >(int)max )
			{max=str[i][j];maxN=j+1;}
		strncpy(p,str[i],maxN);
		strcat(p,substr[i]);
		strcat(p+strlen(output[i]),str[i]+maxN);
		printf("%s\n",output[i]);
	}
	return 0;
}
