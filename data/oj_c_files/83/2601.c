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
	int i,n,zongxuefen=0;
	int chengji[10];
	int xuefen[10];
	double zongpingjidian=0,jidian[10],zongjidian=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
      scanf("%d",&xuefen[i]);
	}
    for(i=1;i<=n;i++){
		scanf("%d",&chengji[i]);
	}
	
	for(i=1;i<=n;i++){
		if((chengji[i]>=90)&&(chengji[i]<=100)){
		jidian[i]=4.0;}
	if((chengji[i]>=85)&&(chengji[i]<=89)){
		jidian[i]=3.7;}
	if((chengji[i]>=82)&&(chengji[i]<=84)){
		jidian[i]=3.3;}
    if((chengji[i]>=78)&&(chengji[i]<=81)){
		jidian[i]=3.0;}
	if((chengji[i]>=75)&&(chengji[i]<=77)){
		jidian[i]=2.7;}
	if((chengji[i]>=72)&&(chengji[i]<=74)){
		jidian[i]=2.3;}
	if((chengji[i]>=68)&&(chengji[i]<=71)){
		jidian[i]=2.0;}
	if((chengji[i]>=64)&&(chengji[i]<=67)){
		jidian[i]=1.5;}
	if((chengji[i]>=60)&&(chengji[i]<=63)){
		jidian[i]=1.0;}
	if(chengji[i]<=60){
		jidian[i]=0;}
    zongjidian+=1.0*xuefen[i]*jidian[i];
			zongxuefen+=xuefen[i];
		}
    zongpingjidian=1.0*zongjidian/zongxuefen;
	printf("%.2lf",zongpingjidian);
return 0;


}
