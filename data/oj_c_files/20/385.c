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

char str1[50],str2[50],ans[50];
void main()
{
	char cutin();

	while(scanf("%s%s",str1,str2)!=EOF)
	{
		cutin();
		printf("%s\n",ans);
	}
}

char cutin()
{
	int i,max=0,max_index=0;
	char temp[50];
	char *p=str1;
	for(i=0;str1[i]!='\0';i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
			max_index=i;
		}
	}
	strcpy(ans,"");
	strncat(ans,str1,max_index+1);
	strcat(ans,str2);
	char *q1=&str1[max_index+1];
	char *q2=temp;
	for(i=0;str1[i]!='\0';i++)
		*(q2+i)=*(q1+i);
	*(q2+i)='\0';
	strcat(ans,temp);
	return 0;
   
}