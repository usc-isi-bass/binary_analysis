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
	int a,b,l,i,j;
	long m=0,t=1;
	char s[100],p[100];
	scanf("%d",&a);
	scanf("%s",s);
    scanf("%d",&b);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
	  if('A'<=s[i]&&s[i]<='Z')
		  s[i]=s[i]-'A'+'0'+10;
	  else if('a'<=s[i]&&s[i]<='z')
		  s[i]=s[i]-'a'+'0'+10;
	  m=(s[i]-'0')*t+m;
	  t=t*a;
	}
	j=0;
	for(i=0;m>0;i++)
	{
		p[i]=m%b+'0';
		if('9'<p[i])
			p[i]=p[i]+'A'-'0'-10;
		m=m/b;
		j++;
	}
	if(i==0)
		printf("0");
	else
	{
                    for(i=j-1;i>=0;i--)
	           printf("%c",p[i]);
	}
	return 0;
}
