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
	char c[20][50];
	int i,j,n,t;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s",c[i]);
		}
	for(i=0;i<=n-1;i++){
		if(!((c[i][0]>='a'&&c[i][0]<='z')||(c[i][0]>='A'&&c[i][0]<='Z')||c[i][0]=='_')){
			t=0;
			}
		else{ 
			for(j=1;c[i][j
				]!='\0';j++){
				if(!((c[i][j]>='a'&&c[i][j]<='z')||(c[i][j]>='A'&&c[i][j]<='Z')||(c[i][j]>='0'&&c[i][j]<='9')||c[i][j]=='_')){
					t=0;
					break;
					}
				t=1;
				}
			}
		if(t==1){
			printf("yes\n");
		}
		if(t==0){
			printf("no\n");
		}
	}
}