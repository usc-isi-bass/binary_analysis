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

//??????NOI??????????~~
int main(){
long a,b,c,d,e,f,s;
while(1){
cin>>a>>b>>c>>d>>e>>f;
s=(d-a)*3600+(e-b)*60+(f-c);
if(!s)return 0;
s+=43200;
cout<<s<<endl;
}
}