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


int main()
{
	int n,sp,dp,dur,h=0,max=0;//sp=systolic pressure,dp=diabolic pressure,dur=duration
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&sp,&dp);
		if(sp>=90&&sp<=140&&dp>=60&&dp<=90){
			h++;
			dur=h;
		}
		else
			dur=h=0;
		if(max>=dur)
			continue;
		else 
			max=dur;
	}
	printf("%d\n",max);
}