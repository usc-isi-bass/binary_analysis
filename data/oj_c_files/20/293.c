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

/* Note:Your choice is C IDE */
void main()
{
	char str[30],substr[4],max;
	int i,len,num;
	scanf("%s%s",str,substr);
	while(str[0]!='0')
	{
		len=strlen(str);
		for(i=0,max=str[0];i<len;i++)if(str[i]>max)max=str[i];
		for(i=0;i<len;i++)if(str[i]==max){
		num=i;
		break;
		}
		for(i=0;i<num+1;i++)printf("%c",str[i]);
		printf("%s",substr);
		for(i=num+1;i<len;i++)printf("%c",str[i]);
		printf("\n");
		for(i=0;i<len;i++)str[i]='0';
		for(i=0;i<3;i++)substr[i]='0';
		scanf("%s%s",str,substr);
	}
}