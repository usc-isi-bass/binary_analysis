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
{int i,j;
char a[2][80];//????????
cin.getline(a[0],79);
cin.getline(a[1],79);
for(i=0;i<2;i++){
	for(j=0;j<80;j++){
		if(a[i][j]=='\0') break;
		if(a[i][j]>96&&a[i][j]<123){
			a[i][j]=a[i][j]-32;
		}
	}
	}//???????????????
if(strcmp(a[0],a[1])==0) cout<<'='<<endl;
else if(strcmp(a[0],a[1])>0) cout<<'>'<<endl;
else cout<<'<'<<endl;//?????????
return 0;//??
}