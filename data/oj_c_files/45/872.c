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
int i,j,k;
char **pp;
pp=(char **)malloc(3*sizeof(char *));
for(i=0;i<3;i++)
{
pp[i]=(char *)malloc(51*sizeof(char));
}
scanf("%s%s",pp[0],pp[1]);
for(i=0;i<(strlen(pp[1]));i++)
{
	if(pp[1][i]==pp[0][0])
	{
		for (k=0;k<(strlen(pp[0]));k++)
		{pp[2][strlen(pp[0])]=0;
		pp[2][k]=pp[1][k+i];}
		if(strcmp(pp[0],pp[2])==0)
		{printf("%d",i);
		break;}
	}
}
return(0);
}
 
 

 
