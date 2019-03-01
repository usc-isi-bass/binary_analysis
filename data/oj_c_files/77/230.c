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

char str[100]={0},p1,p2;
int p[100]={0},i,j,len,n1,n2,n=0;
void rank()
{
	for(i=0;i<len;i++)
	{
		if(p[i]==2){
			n1=i;
			p[i]=3;
			break;}}
			for(j=n1-1;j>=0;j--){
				if((p[j]!=2)&&(p[j]!=3))
					break;}
					n2=j;
					p[n2]=3;
				
			
	cout<<n2<<" "<<n1<<endl;
	n++;
	if(n<len/2)
		rank();
}
int main()
{
	cin>>str;
	len=strlen(str);
	p1=str[0];
	for(i=0;i<len;i++){
		if(str[i]!=p1)
		break;}
	p2=str[i];
	for(i=0;i<len;i++){
		if(str[i]==p1)
			p[i]=1;
		else
			p[i]=2;
	}
	rank();
	return 0;
}

			