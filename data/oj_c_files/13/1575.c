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
	int all,name[20000],input[20000],i,p,count,judge;
	scanf("%d",&all);
	count=0;
	for(i=0;i<all;i++){name[i]=0;}
	for(i=0;i<all;i++){scanf("%d",&input[i]);}
	for(i=0;i<all;i++){
		judge=0;
		for(p=0;p<count;p++){if(name[p]==input[i]){judge=1;break;}}
		if(judge==1){continue;}
		name[count]=input[i];
		count++;
	}
	printf("%d",name[0]);
	for(i=1;i<count;i++){printf(" %d",name[i]);}

return 0;
}