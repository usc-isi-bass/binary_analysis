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

int main(){
int a[500],b[500],i,j,n,m;
i=0;
j=0;
scanf("%d",&n);
for(m=0;m<n;m++){
	scanf("%d", &(a[m]));
	scanf("%d", &(b[m]));
	if(a[m]==0&&b[m]==1)
		i+=1;
	else if(a[m]==1&&b[m]==2)
		i+=1;
	else if(a[m]==2&&b[m]==0)
		i+=1;
	else if(a[m]==b[m])
		continue;
	else
		j+=1;
}
if(i>j)
printf("A");
else if(i<j)
printf("B");
else 
printf("Tie");
return 0;
}
