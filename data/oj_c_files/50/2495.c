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
{int a[11]={31,28,31,30,31,30,31,31,30,31,30},b[12],w;//????a??1?11???????b??1?12?13??1?1??????w
cin>>w;//??w
b[0]=12;//??b????
for(int i=1;i<12;i++)//?????b???
	b[i]=b[i-1]+a[i-1];
for(int i=0;i<12;i++)//???????13?????
	if((w+b[i]%7)%7==5)
		cout<<i+1<<endl;//????
return 0;
}