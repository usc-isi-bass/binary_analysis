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
	int i=1,m=0,len[300];
	char c,str[20];
	scanf("%s",str);
	len[0]=strlen(str);
	while((c=getchar())!='\n')
	{
		scanf("%s",str);
		len[i]=strlen(str);
		i++;
	}
	m=i;
	if (m==1) printf("%d",len[0]);
	else
	{
		printf("%d,%d,",len[0],len[1]);
		for(i=2;i<m-1;i++)
		printf("%d,",len[i]);
		printf("%d",len[m-1]);
	}
}

