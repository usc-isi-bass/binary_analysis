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
	int n,a=0,b=0,i,j;
	int sz[300][2];
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	
     scanf("%d%d",&sz[i][0],&sz[i][1]);
	
}
for(i=0;i<n;i++){
if((sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==2&&sz[i][1]==0))
{ a++;
}
else if((sz[i][1]==1&&sz[i][0]==2)||(sz[i][1]==0&&sz[i][0]==1)||(sz[i][1]==2&&sz[i][0]==0))
{
	b++;
}
}
if(a>b)
{ printf("A");
}
else if(a==b)
{
	printf("Tie");
}
else {
	printf("B");
}

	return 0;
}
