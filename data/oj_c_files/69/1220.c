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

char  s[100001];
int   a[100001],b[100001],c[100001];
int main(){
    long i,j,k,m=0;
    long alen,blen,clen;
    gets(s);
    alen=strlen(s);
    for(i=alen-1;i>=0;i--)
         a[alen-i]=s[i]-'0';//?????????????
    gets(s);
    blen=strlen(s);
    for(i=blen-1;i>=0;i--)
         b[blen-i]=s[i]-'0';//?????????????   
    if(alen>blen)
       clen=alen;
    else
       clen=blen;
    for(i=1;i<=clen;i++)
        c[i]=a[i]+b[i];
    for(i=1;i<=clen;i++)
        if(c[i]>9){
            c[i+1]++;
            c[i]-=10;
            if(i==clen)
                clen++;//????
        }
    for(i=clen;i>=1;i--)
	{
		if(c[i]!=0){
		    m=i;
			break;
		}
	}
    if(m==0){
		for(i=clen;i>=1;i--)
			printf("%d",c[i]);
	}
    if(m!=0){
		for(i=m;i>=1;i--)
			printf("%d",c[i]); 
	}
    printf("\n");     
}
