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
	char a[100],b[100],c;
	int i,d[26]={0},r;

	scanf("%s",a);
    scanf("%s",b);
   
	for (i=0;i<strlen(a);i++)
		for (c='a';c<='z';c++)
            if (c==a[i])
				d[c-'a']++;
   
	for (i=0;i<strlen(b);i++)
		for (c='a';c<='z';c++)
            if (c==b[i])
				d[c-'a']--;
    r=0;
	for (i=0;i<26;i++)
		if (d[i]!=0)
			r=1;
    
	if (r==0)
		printf("YES");
	else printf("NO");
}