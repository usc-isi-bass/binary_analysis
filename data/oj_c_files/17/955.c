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

char a[1000];
int judge(int,int);
int main()
{for(;cin>>a;){
	cout<<a<<endl;
	judge(0,0);
	cout<<a<<endl;
}
return 0;
}
int judge(int i,int l)
{int t;
if(a[i]=='\0') return -1;
if(a[i]=='('){t=judge(i+1,l+1);
a[i]=(t==-1)?'$':' ';
return (t==-1)?-1:judge(i+1,l);
}

else if(a[i]==')'){a[i]=l==0?'?':' ';
return (l==0)?judge(i+1,l):i;
}
else {a[i]=' ';return judge(i+1,l);}


	}
