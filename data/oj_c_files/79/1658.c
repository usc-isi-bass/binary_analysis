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
	for (int j=0;;j++){
	int m,n;
	scanf("%d%d",&n,&m);
	if(m==0) break;else{	
	int k=0;
	for (int i=2;i<=n;i++)
		k=((m%i)+k)%i;
	printf("%d\n",k+1);
	}
}
}
 