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

main(){
	char a[251],b[251],c[252]={0};
	int alen,blen,clen,i,x;
	scanf("%s%s",a,b);
	alen=strlen(a);blen=strlen(b);
	for(i=1;i<alen+1;i++)a[251-i]=a[alen-i]-'0';
	for(i=1;i<blen+1;i++)b[251-i]=b[blen-i]-'0';
	for(i=250-alen;i>=0;i--)a[i]=0;
	for(i=250-blen;i>=0;i--)b[i]=0;
	for(i=250;i>=0;i--){
		c[i+1]+=a[i]+b[i];
		if(c[i+1]>9){
			c[i+1]-=10;c[i]++;
		}
	}	
	while(i<252&&c[i]<=0)i++;if(i==252)printf("0");
	for(;i<252;i++)printf("%d",c[i]);
	return 0;
}