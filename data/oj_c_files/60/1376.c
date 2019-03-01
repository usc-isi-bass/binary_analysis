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

int sushu(int x)
{
	int i,k=0;
	for(i=1;i<=x;i++) if(x%i==0) k=k+1;
	if(k==2) return 1;
	else return 0;		
	}
main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n-2;i++) if(sushu(i)&&sushu(i+2)) cout<<i<<" "<<i+2<<endl;
	if(n<5) cout<<"empty";
	}
