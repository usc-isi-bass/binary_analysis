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


int main(){
int a[1000],b[1000];
char c;
int i=0;
int max=0;

while(true){
	cin>>a[i];
	if((c=cin.get())=='\n')
		break;
	else i++;
}

int sum=i+1;
i=0;
while(true){
	cin>>b[i];
	if((c=cin.get())=='\n')
		break;
	else i++;
}



for(i=0;i<sum;i++)
	if(max<b[i])
		max=b[i];



int time[max];

for(i=0;i<max;i++)
	time[i]=0;

for(i=0;i<sum;i++)
	for(int j=a[i];j<b[i];j++)
		time[j]++;
int num=0;

for(i=0;i<max;i++)
	if(num<time[i])
		num=time[i];

cout<<sum<<' '<<num<<endl;

return 0;
}