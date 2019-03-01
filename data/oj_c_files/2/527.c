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

void main()
{
	int i,j,k,n,max;
	int a[1000],b[26];
	char name[1000][26];
	scanf("%d",&n);
	for(i=0;i<26;i++)
		b[i]=0;
	for(i=0;i<n;i++){
		scanf("%d%s",&a[i],name[i]);
		for(j=0;j<strlen(name[i]);j++)
			b[name[i][j]-'A']++;
	}
	max=0;
	for(k=1;k<26;k++)
		if(b[k]>b[max])
			max=k;
	printf("%c\n%d\n",max+'A',b[max]);
	for(i=0;i<n;i++)
		for(j=0;j<strlen(name[i]);j++)
			if(name[i][j]==max+'A'){
				printf("%d\n",a[i]);
				break;
			}
}