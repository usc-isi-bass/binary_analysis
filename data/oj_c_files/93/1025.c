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
{  int n,a,b,c;//????a?b?c
cin>>n;
a=n%3;//a?n??3???
b=n%5;//b?n??5???
c=n%7;//c?n??7???
if(a==0&&b==0&&c==0)
	cout<<"3"<<" "<<"5"<<" "<<"7";//????3?5?7??
else if(a==0&&b==0&&c!=0)
	cout<<"3"<<" "<<"5";//????3?5??
else if(a==0&&b!=0&&c==0)
	cout<<"3"<<" "<<"7";//????3?7??
else if(a!=0&&b==0&&c==0)
	cout<<"5"<<" "<<"7";//????5?7??
else if(a==0&&b!=0&&c!=0)
	cout<<"3";//?3??
else if(a!=0&&b==0&&c!=0)
	cout<<"5";//?5??
else if(a!=0&&b!=0&&c==0)
	cout<<"7";//?7??
else if(a!=0&&b!=0&&c!=0)
	cout<<"n";//???3?5?7??
return 0;
}

