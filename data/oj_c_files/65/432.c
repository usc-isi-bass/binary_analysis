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

int main (){
	int n,i,sza[200],szb[200],a=0,b=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d%d",&(sza[i]),&(szb[i]));
		if ((sza[i]==0&&szb[i]==1)||(sza[i]==1&&szb[i]==2)||(sza[i]==2&&szb[i]==0)){
			a++;
		}else if ((szb[i]==0&&sza[i]==1)||(szb[i]==1&&sza[i]==2)||(szb[i]==2&&sza[i]==0)){
			b++;
		}else if (sza[i]=szb[i]){
			continue;
	}
	}
	if (a==b){
		printf ("Tie");
	}else { if (a>b){
		printf ("A");
	}else {printf ("B");
	}
	}
     return 0;
}

	
		