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
int m,n,k;
int M,i,brk=0;
cin>>n>>k;
for(M=n+k;;M+=n)
{m=M;
for(i=0;i<n;i++)
{if(m%n!=k)
{brk=1;break;}
m=m-k-m/n;
}
if(!brk&&m>0)
break;
brk=0;
}
cout<<M;
return 0;
}