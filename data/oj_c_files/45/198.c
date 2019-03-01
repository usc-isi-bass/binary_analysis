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
	char s[50];char w[50];
	scanf("%s",s);
	scanf("%s",w);
	int lens;int j,i,t;
	lens=strlen(s);
	for(j=0;s[0]!=w[j]&&j<lens;j++);
    for(i=0,t=j;s[i]==w[t]&&i<lens&&t<50;i++,t++);
	if(i==lens)printf("%d\n",j);
}
