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
	int i,q=1;
	double s=0.0,len,res,req;
	char a[1000],b[1000];
	scanf("%lf",&req);
	scanf("%s",a);
	scanf("%s",b);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			q=0;
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			q=0;
	}
	if(q==0) printf("error\n");
	else if(q!=0)
	{
		for(i=0;i<len;i++)
		{
		  if(a[i]==b[i])
		  {
			s++;
		  }
	}
	res=s/len*1.0;
	if(req<res) 
	printf("yes\n");
	else printf("no\n");
	}
		return 0;
}