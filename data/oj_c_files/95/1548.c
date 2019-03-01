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


daxie(char s[])
{
	int len;
	int i,j;
	len=strlen(s);
	for(i=0;i<len;i++)
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+'a'-'A';
	return;
}

main()
{
	char s1[90],s2[90];
	int c;


	gets(s1);
	gets(s2);

	daxie(s1);
	daxie(s2);

	c=strcmp(s1,s2);
	if(c==-1) printf("<");
	if(c==0)  printf("=");
	if(c==1) printf(">");
}
