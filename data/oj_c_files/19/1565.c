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

/************
 * ???????
 * ?????1000012923
 * ???2010.11.6
 * ?????????????
*************/



int main(){
	char s0[2001],s1[201],s2[201];
	cin.getline(s0,2000);
	cin.getline(s1,200);
	cin.getline(s2,200);
	int L0=0,L1=0,L2=0;
	while(s0[L0]!=0)L0++;//???????strlen???
	while(s1[L1]!=0)L1++;
	while(s2[L2]!=0)L2++;
	if(L1==0){
		cout<<s0;
		return 0;
	}
	for(int i=0;i<=L0-L1;i++){//??
		int is=0;
		for(int j=0;j<L1;j++)
			if(s0[i+j]!=s1[j]){
				is++;
				break;
			}
		if(is!=0)continue;//?????????
		if((i!=0&&s0[i-1]!=' ')||(s0[i+L1]!=' '&&s0[i+L1]!=0))continue;//???????????
		if(L1>L2)for(int j=i+L1;j<L0;j++)s0[j+L2-L1]=s0[j];//???????
		else for(int j=L0-1;j>=i+L1;j--)s0[j+L2-L1]=s0[j];
		for(int j=i;j<i+L2;j++)s0[j]=s2[j-i];
		L0+=L2-L1;//????
		i+=L2;
	}
	s0[L0]=0;
	cout<<s0;
}
