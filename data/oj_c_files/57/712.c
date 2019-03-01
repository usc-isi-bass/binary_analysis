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
	char word[32];
	int n,length;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",word);
		length=strlen(word);
		if(strcmp(word+length-2,"er")==0||strcmp(word+length-2,"ly")==0)
		word[length-2]='\0';
		else if(strcmp(word+length-3,"ing")==0)
		word[length-3]='\0';
		printf("%s\n",word);
	}
}