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
	int i,n;
	n=0;
	char a[80],b[80];
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if((a[i]<='Z')&&(a[i]>='A'))
			a[i]=a[i]-'A'+'a';
        if((b[i]<='Z')&&(b[i]>='A'))
			b[i]=b[i]-'A'+'a';
	}

	for(i=0;;)
	{
		if((a[i]==b[i])&&(a[i]!='\0'))
			i++;
		else if((a[i]=='\0')&&(b[i]=='\0'))
			break;
		else {
			n=a[i]-b[i];
			break;
		}
		
	}
	if(n>0)
    printf(">");
	else if(n==0)
		printf("=");
	else printf("<");
	return 0;
}