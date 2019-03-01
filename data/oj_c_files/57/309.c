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

void main()
{
	int n,i;
	char str[15];
    void change(char str[15]);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",str);
		change(str);
	}
}
	
	void change(char strr[15])
	{
		char cutstr[13]={""},mstr[15]={""};
		int length;
		length=strlen(strr);
		strncpy(mstr,strr,length-2);
		strcat(mstr,"ly");
		if(strcmp(mstr,strr)>=0)
		{
			strncpy(cutstr,strr,length-2);
		}
		else
		{
			strncpy(cutstr,strr,length-3);
		}
		printf("%s\n",cutstr);
	}