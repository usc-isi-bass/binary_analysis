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


void main(){
	char s[500];
	int i,m,j=1,k=1,sp[50],len[50],minbase=1,maxbase=1;//sp??????????????,len????????
	gets(s);
	sp[0]=0;//???"?0?"(??)???????,????????????
	for (i=0;s[i]!='\0';i++){
		if (s[i]==' '){
			sp[j]=i;//???????????
			len[k]=sp[j]-sp[j-1]-1;//?????????????????j?????1,sp[j]-sp[j-1]-1???k?????,?len[1]???sp[j]-sp[j-1]
			j++;
			k++;//????????????
		}
	}
sp[j]=i;
	len[k]=i-sp[j-1]-1;//????????????????i='\0',??????,????????i?\0????,?????????
	len[1]=sp[1];//len[1]????sp[j]-sp[j-1]-1,????sp[j]-sp[j-1],??1??,len[1]??sp[1]
	int tempmin=len[1];
	int tempmax=len[1];
	for (m=1;m<=k;m++){
		if (tempmin>len[m]){
			minbase=m;
			tempmin=len[m];
		}
		else if (tempmax<len[m]){
			maxbase=m;
			tempmax=len[m];//???minbase?maxbase?????????????
		}
	}
	if (maxbase==1){
		for (i=0;i<sp[1];i++)//???????????????i=0??????sp[0]+1
			printf("%c",s[i]);
	}
	else{
		for (i=sp[maxbase-1]+1;i<sp[maxbase];i++)//????????????????n?????n-1???+1???????????
		printf("%c",s[i]);
	}
	printf("\n");
	if (minbase==1){
		for (i=0;i<sp[1];i++)
			printf("%c",s[i]);
	}
	else{
		for (i=sp[minbase-1]+1;i<sp[minbase];i++)//??
		printf("%c",s[i]);
	}
}