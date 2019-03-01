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


char q[1200];
char lastQ;
int head,length;

char MT(char q)
{
if ((q>='a')&&(q<='z')) return q-'a'+'A';
}

int main()
{
cin>>q;
head=1;length=1;lastQ=q[0];
while (q[head]!='\0')
{
if (MT(q[head])==MT(lastQ)) length++;
else
{
cout<<'('<<MT(lastQ)<<','<<length<<')';
lastQ=q[head];length=1;
}
head++;
}
cout<<'('<<MT(lastQ)<<','<<length<<')'<<endl;
return 0;
}