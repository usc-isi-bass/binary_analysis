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

/*??? 1200012866 11.2*/
int main()
{
	char f,a[100];
	int x=0;
	while((f=getchar())!=EOF){//??
		a[x]=f;
		x++;
	}
	x=x-1;//????
	for(int i=0;i<=x;i++){//????????
		if(a[i]==32)
			if(a[i+1]==' ')
				continue;
		cout<<a[i];
		}		

	return 0;
}