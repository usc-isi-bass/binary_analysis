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
	int num=0;
	int n;	
	cin>>n;
	for(int i=3;i<=7;i=i+2)                    //???????? 
{
		if (n%i==0)
{num++;                                        //??????????? 
	if (num==1)
	cout<<i;                                  //????????????? 
	else  if (num!=2||num!=3)cout<<" "<<i;}  //????????????????? 
	 
}if(num==0)cout<<"n"; 
 
return 0;
}
