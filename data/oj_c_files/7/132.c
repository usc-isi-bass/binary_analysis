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

	char src[256];
	char dst[256];
	char replacement[256];
	//freopen("3.in","r",stdin);
	//freopen("3.out","w",stdout);

	scanf("%s",src);//????
	scanf("%s",dst);//??
	scanf("%s",replacement);//??????
	char* p=strstr(src,dst);
	if( p== NULL )
	{
		printf("%s\n",src);
	}
	else
	{
		int len = strlen(replacement);
		int i;
		for (i=0;i<len;i++)
		{
			*p = replacement[i];
			p++;
		}//end for
		printf("%s\n",src);
	}//end if


	return 0;
}