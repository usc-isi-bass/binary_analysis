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
    int n;
	int a[200],b[200];
	int i;
	int x=0;
	int y=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d %d",&a[i],&b[i]);
		if ((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			x++;
		}else if ((a[i]==1&&b[i]==0)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			y++;
		}
	}
	if (x>y){
		printf ("A");
	}else if (x<y){
		printf ("B");
	}else {
		printf ("Tie");
	}
	
		

	return 0;
}	
