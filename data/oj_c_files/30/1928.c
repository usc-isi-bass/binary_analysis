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

int main(int argc, char* argv[])
{
	int n,s=0,m;
	scanf("%d",&m);
	for(n=1;n<=m;n++){
		if(n%7!=0&&n/10!=7&&(n-(n/10*10))!=7){
              s=s+n*n;
		  }
	}
		  printf("%d\n",s);
     return 0;
}

