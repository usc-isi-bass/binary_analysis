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
int a,b,i=0,j=0,t=0;
double k,x;
char n[100],m[100];
cin>>a>>n>>b;
x=strlen(n);
for(i=0;i<x;i++)
{{if(n[i]>='A'&&n[i]<='Z')
k=n[i]-55;
else if(n[i]>='a'&&n[i]<='z')
k=n[i]-87;
else k=n[i]-48;}t=t+k*pow((double)a,x-i-1.0);
}
while(t/b!=0)
{m[j]=t%b;
t=t/b;
j++;
}m[j]=t%b;

while(j>=0){if(m[j]>9)(char)(m[j]+=55);
else (char)(m[j]+=48);
cout<<m[j];j--;}
return 0;
}
