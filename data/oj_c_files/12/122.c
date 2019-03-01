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
	float p[100][999];
	int i,m;
	for(m=0;;m++){
	for(i=0;;i++){
		scanf("%f",&p[m][i]);
		if(p[m][i]==0) break;
	}
	if(p[m][0]==-1) break;
	else{
          int a=0;
		  for(int j=0;j<i;j++){
			  for(int k=0;k<i;k++){
				  if(p[m][j]/p[m][k]==2) a++;
				  else a=a;
			  }
		  }
		  printf("%d\n",a);
		  }
	}
	return 0;
}

