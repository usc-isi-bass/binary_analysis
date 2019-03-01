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
	int A[26]={0},a[26]={0},l,i,n,m=0;
	char sen[500];
	gets(sen);
    l=strlen(sen);
	for(i=0;i<l;i++)
	{
		if(sen[i]>='a'&&sen[i]<='z'){m=1;a[sen[i]-'a']++;}
		if(sen[i]>='A'&&sen[i]<='Z'){m=1;A[sen[i]-'A']++;}
	}
	for(i=0;i<26;i++)
		if(A[i]!=0)printf("%c=%d\n",'A'+i,A[i]);
	for(i=0;i<26;i++)
		if(a[i]!=0)printf("%c=%d\n",'a'+i,a[i]);
		if(m==0)printf("No");
}
