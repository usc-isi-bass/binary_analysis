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
	int shuzu[100][6];
	int zongshu[100];
	int i=0;
	scanf("%d %d %d %d %d %d",&shuzu[i][0],&shuzu[i][1],&shuzu[i][2],&shuzu[i][3],&shuzu[i][4],&shuzu[i][5]);
	while(!((shuzu[i][0]==0)&&(shuzu[i][1]==0)&&(shuzu[i][2]==0)&&(shuzu[i][3]==0)&&(shuzu[i][4]==0)&&(shuzu[i][5]==0))){
	    shuzu[i][3]+=12;
	    zongshu[i]=60-shuzu[i][2]+shuzu[i][5];
       	shuzu[i][2]=0;
	    shuzu[i][5]=0;
	    shuzu[i][1]++;
	    zongshu[i]+=60*shuzu[i][4]+(60-shuzu[i][1])*60;
	    shuzu[i][0]++;
	    zongshu[i]+=(shuzu[i][3]-shuzu[i][0])*3600;
	    printf("%d\n",zongshu[i]);
		i++;
		scanf("%d %d %d %d %d %d",&shuzu[i][0],&shuzu[i][1],&shuzu[i][2],&shuzu[i][3],&shuzu[i][4],&shuzu[i][5]);
	}
	return 0;
}
