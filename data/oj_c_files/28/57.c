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

    int i=0;
    char a[100];
	while(scanf("%s",a)!=EOF)
	{if(i==0){printf("%d",strlen(a));i++;}
	 else printf(",%d",strlen(a));
	}
}
