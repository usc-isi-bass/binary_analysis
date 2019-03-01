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
	char str[101],word[101][30];
	int i,x,y,len;
	gets(str);
	len=strlen(str);
	x=y=0;
	for(i=0;i<=len;i++)
	{
		
		if(str[i]==' '||str[i]==','||str[i]=='.')
		{
			if(y==0)continue;
			else{
			word[x][y]='\0';
			x++;
			y=0;
			}
		}
		else word[x][y++]=str[i];
	}
	printf("%s",word[0]);
	for(i=1;i<=x;i++)
		
	
	printf(" %s",word[i]);

}	

			