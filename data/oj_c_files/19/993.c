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

int main(){
	char s[100],a[100],b[100];
	gets(s);
	scanf("%s\n%s",a,b);
	int n,m,p=0,q,i,j;
	n=strlen(s);
	m=strlen(a);

	int begin = 0;


	for(i=0;i<n;i++)
	{
		if(a[0]==s[i] && ( i == 0 || s[i-1] == ' '))
		{
			q=i;
			p = 0 ;
			for(j=1;j<m;j++){
				if(a[j]!=s[i+j]){
					break;
				}else{
					p++;
				}
			}
			if(p==m-1 && ( i+m == n || s[i+m]== ' ') )
			{
				printf("%s",b);
				i += m - 1 ;
			}
			else
			{
				printf("%c",s[i]);
			}
		        
		}else
			printf("%c",s[i]);
	}
	
	return 0;
}