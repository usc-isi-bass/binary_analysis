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

int w[10][10];
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	for(int i=0;i<a;i++)for(int j=0;j<b;j++)cin>>w[i][j];
	int p[10],q[10];
	memset(p,0,sizeof(p));
	memset(q,0,sizeof(q));
	for(int i=0;i<a;i++)
		for(int j=1;j<b;j++)if(w[i][j]>w[i][p[i]])p[i]=j;

	for(int i=1;i<a;i++)
		for(int j=0;j<b;j++)if(w[i][j]<w[q[j]][j])q[j]=i;

	for(int i=0;i<a;i++)for(int j=0;j<b;j++)
		if((p[i]==j)&&(q[j]==i)){
			cout<<i<<'+'<<j<<endl;
			return 0;
		}

	cout<<"No"<<endl;
	return 0;
}

