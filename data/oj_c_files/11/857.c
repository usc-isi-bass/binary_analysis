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

int rn(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		return 1;
	else return 0;
}
int main()
{
	int y,m,d,res=0,day[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int i;
	scanf("%d%d%d",&y,&m,&d);
	
	for(i=0;i<m;i++){
		res=res+day[i];
	}
	if(rn(y)==1){
		if(m>=3){
			printf("%d\n",res+d+1);
		}
		else printf("%d\n",res+d);
	}
	if(rn(y)==0)
		printf("%d\n",res+d);
	return 0;
}


