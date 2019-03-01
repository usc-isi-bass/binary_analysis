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
	int n,k;
	cin >> n >> k;
	int apple[n+1],i;  //apple[i]???i?????????
	for(i=1;i<n+1;i++){
		apple[i]=k;   //???
	}
	do
	{
		apple[n]=apple[n]+n;   //????????????????n?
		for(i=n-1;i>=1;i--){
			if(apple[i+1]%(n-1)!=0) break;
			else apple[i]=apple[i+1]*n/(n-1)+k;
		}
	}while(i>=1);

	cout << apple[1] << endl;  //????????????
	return 0;
}
