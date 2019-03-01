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
int n,sz[500],js[500],a=0,m;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&(sz[i]));
if(sz[i]%2!=0)
{
js[a]=sz[i];
a++;
}	
}		
    int e,k,x;
    for(int k = 1 ; k <=a ; k++){
	for(int x = 0; x< a- k; x++){
			if(js[x] > js[x+1]){
			e = js[x+1];
			js[x+1] = js[x];
			js[x] = e;
		                            }
	                              }
                                  }
for(m=0;m<a-1;m++)
{
printf("%d,",js[m]);
}
printf("%d",js[a-1]);       
return 0;
}