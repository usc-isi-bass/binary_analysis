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

main()
{
	int a,i,j,k,num,length;
	char words[1000];
	gets(words);
	length=strlen(words);	
	for(i=0;i<length;i++)
	words[i]=toupper(words[i]);
	for(i=0;i<length;i++)
	{
			num=1;
		for(j=i;j<length;j++)
		{
			if(words[j]==words[j+1]) num++;
			else break;
		}
		if(words[i]!=words[i-1])
			printf("(%c,%d)",words[i],num);
	}

}