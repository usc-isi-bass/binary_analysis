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
	int len,j,a=1;        //l&Icirc;&ordf;&Ecirc;&auml;&Egrave;&euml;&micro;&Auml;×&Ouml;·&ucirc;&acute;&reg;&sup3;¤&para;&Egrave; 
	char s[1000];
	scanf("%s",s);
	len=strlen(s);
	//scanf("%d",&l);
	for(int i=0;i<len;i=i+a)
	{
		a=1;
		for(j=i;j<len;j++)
		{
			if(s[j]==s[j+1]||s[j]==s[j+1]-'a'+'A'||s[j+1]==s[j]-'a'+'A')
				a++;
			else
				break;
		}
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-'a'+'A';
		printf("(%c,%d)",s[i],a);

	}
	
}