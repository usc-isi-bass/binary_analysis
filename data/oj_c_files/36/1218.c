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
	int i,j,s=0,l;
	char s1[255],s2[255];
	scanf("%s%s",&s1,&s2);
	l=strlen(s2);
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<l;j++)
		{
			if(s1[i]==s2[j]) {s++,s2[j]=0;break;}
			}
		}
		if(s<l||strlen(s1)!=l) printf("NO");
		else  printf("YES");
		
	return 0;
	
	} 
