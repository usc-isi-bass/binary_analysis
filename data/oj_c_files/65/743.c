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
int n,cai[300][2],i,t,s;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d %d",&(cai[i][0]),&(cai[i][1]));
s=0;
for(i=0;i<n;i++){
	t=(cai[i][0])-(cai[i][1]);
	if(t==-1||t==2)
		s+=1;
	if(t==1||t==-2)
		s-=1;
	}
if(s>0)
	printf("A");
if(s<0)
	printf("B");
if(s==0)
	printf("Tie");
return 0;
}
