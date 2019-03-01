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

int f(int m,int n)
{if(n==1||m==0) return 1;
 else if(m<0) return 0;
 else return (f(m,n-1)+f(m-n,n));


}
int main(){
int x,i,m,n;
int a[100];
cin>>x;
for(i=1;i<=x;i++){cin>>m>>n;  a[i]=f(m,n);}
for(i=1;i<=x;i++) cout<<a[i]<<endl;



 return 0;
}