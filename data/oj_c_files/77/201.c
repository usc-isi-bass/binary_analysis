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

int c[100]={0};//?????????????
char boy,girl;
char a[100];
void f()
{
	int k=1,i;
	for(i=0;i<strlen(a);i++)
	{	if(a[i]==boy&&c[i]==0)//?????????
		{ while(c[i+k]==1) {k++;} //?????
		  if(a[i+k]==girl) {cout<<i<<' '<<i+k<<endl;c[i]=1;c[i+k]=1;break;}//???????????????????break
		  else {k=1;continue;}//??????k?????1?????
		  
		}
	}
	if(i+k<strlen(a)-1) f();//???????????????????f
}

int main()
{	
	cin.getline(a,100);//??
	boy=a[0];//??????
	girl=a[strlen(a)-1];//???????
	f();
	return 0;
}