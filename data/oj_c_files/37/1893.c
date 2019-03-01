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
	int t,i,j,k=0,z,y,m=0;
	char s[100000];
	scanf("%d",&y);
	for(z=0;z<y;z++)
{
	m=0;
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		k=0;
		for(j=0;s[j];j++)
		{
			if(s[i]==s[j])  k++;
		}
		if(k==1)
	 {
		printf("%c\n",s[i]);m++;break;}
	 }
	 
	if(m==0)printf("no\n");}
}
