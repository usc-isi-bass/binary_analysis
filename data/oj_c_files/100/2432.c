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
	char zifu[300],c;
	int i,flag=0,t;
	int xiaoxie[26]={0};
	int daxie[26]={0};
	scanf("%s",&zifu);
	for (i=0; ;i++)
	{
		if (zifu[i]=='\0') break;
		else 
		{
			if (zifu[i]>='a'&&zifu[i]<='z')
			{
				flag=1;
				t=zifu[i]-'a';
				xiaoxie[t]++;
			}
			if(zifu[i]>='A'&&zifu[i]<='Z')
			{
				flag=1;
				t=zifu[i]-'A';
				daxie[t]++;
			}
		}
	}
	if (flag==0)
	{
		printf("No");
	}
	else
	{
		for(i=0;i<26;i++)
		{
			if (daxie[i]!=0)
			{
				c='A'+i;
				printf("%c=%d\n",c,daxie[i]);
			}
		}
		for(i=0;i<26;i++)
		{
			if (xiaoxie[i]!=0)
			{
				c='a'+i;
				printf("%c=%d\n",c,xiaoxie[i]);
			}
		}
	}
}

				

