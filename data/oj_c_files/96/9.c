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
	char a[100];
	char b[100];
	scanf("%s",a);
	int l=strlen(a);
	int m=0;
	int i;
	for(i=0;i<l;i++)
	{	
		b[i]=(10*m+a[i]-'0')/13+'0';
		m=(10*m+a[i]-'0')%13;
	}
	b[i]='\0';
	strcpy(b,b+1);
	if(b[0]=='\0'||b[0]=='0'&&b[1]=='\0')
		printf("0\n%d",m);
	else if(b[0]=='0')
	{
		strcpy(b,b+1);
		printf("%s\n%d",b,m);
	}
	else
		printf("%s\n%d",b,m);

}