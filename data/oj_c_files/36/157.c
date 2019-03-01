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
	char a[100],b[100];
	unsigned int i,s1[26]={0},s2[26]={0},temp=0;
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))printf("NO");
	else 
	{
	for(i=0;i<strlen(a);i++)
	{
		s1[a[i]-'a']++;
		s2[b[i]-'a']++;
	}
	for(i=0;i<26;i++)
		if(s1[i]==s2[i])temp++;
	if(temp==26)printf("YES");
	else printf("NO");
	}
}