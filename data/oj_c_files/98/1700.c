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
	int n=0;
	cin>>n;
	char b[2];
	cin.getline(b,2);
	char a[5000];
	cin.getline(a,5000);
	char *p=NULL,*q=NULL;
	int sum=0,single=0;//????????????
	for(p=a;*p!=' ';p++)
		cout<<*p;
	sum=p-a;
	for(int i=1;i<n;i++){
		single=0;
		q=p+1;
		for(p++;*p!=' '&&*p!='\0';p++)
			single++;
		sum+=single+1;
		if(sum<=80)cout<<' ';
		else {
			cout<<endl;
			sum=single;
		}
		if(i<n-1){
			for(;*q!=' ';q++)
				cout<<*q;
		}
		else {
			for(;*q!='\0';q++)
				cout<<*q;
		}
	}
	return 0;
}