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

char a[250],b[250];//???????????????
int A[250],B[250],C[251]={0};//????????????????????????[249]?
int carrybit=0;//?carrybit?????
int m=-1;//?m???C?????????????
void add(int n){
	if(n<0){
		C[n+1]=carrybit;
		return;
	}
	C[n+1]=(A[n]+B[n]+carrybit)%10;
	carrybit=(A[n]+B[n]+carrybit)/10;
	add(n-1);
}
int main()
{
	int i=0;
	cin.getline(a,250);
	cin.getline(b,250);
	int al=strlen(a),bl=strlen(b);
	for(i=0;i<al;i++)
		A[250-al+i]=(int)a[i]-48;
	for(i=0;i<250-al;i++)
		A[i]=0;//????a????????A??
	for(i=0;i<bl;i++)
		B[250-bl+i]=(int)b[i]-48;
	for(i=0;i<250-bl;i++)
		B[i]=0;//????b????????B??
	add(249);
	for(i=0;i<251;i++)
		if(C[i]!=0){m=i;break;}
	if(m==-1)cout<<"0"<<endl;
	if(m>=0){
		for(i=m;i<251;i++)
			cout<<C[i];
		cout<<endl;
	}
	return 0;
}
