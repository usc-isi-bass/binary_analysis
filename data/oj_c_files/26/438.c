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
	int ls,i,word,num;
	char s[100],s1[100][100];
	gets(s);
	ls=strlen(s);
	word=0;
	num=0;
	for(i=0;i<ls;i++)
	{
		if(s[i]!=' ')s1[word][num++]=s[i];
		else{
			while(s[i]==' ')i++;
			i--;
			s1[word][num]='\0';
			word++;
			num=0;
		}
	}
	for(i=0;i<=word;i++)
	{
	printf("%s",s1[i]);
	if(i!=word)printf(" ");
	}


        return 0;
}