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
	int n,length,count=0,i;
	char str[1001],cube;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		str[i]=str[i]+'A'-'a';
	}
	cube=str[0];
	for(i=0;i<=length;i++)
	{
		if(str[i]==cube)
		count++;
		if(str[i]!=cube)
		{
			printf("(%c,%d)",cube,count);
			cube=str[i];
			count=1;
			
		}
	}
	
}



