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
	int n,k,i,temp=0;//????
	char b[1000][50];//??????????
    char *p[1000];//??????
	cin>>n;cin.get();
	k=1;
	while(k<=n)
	{
		cin>>b[k];
		p[k]=b[k];//??????????
		k++;
	}
	for(i=1;i<=n;i++)
	{
		cout<<p[i];//??????????
		temp++;
		temp+=strlen(b[i]);
			if(temp+strlen(b[i+1])>80) {cout<<endl;temp=0;}//???80????????
			else if(i!=n) cout<<" ";//??,?????????,?????
	}
	return 0;
}