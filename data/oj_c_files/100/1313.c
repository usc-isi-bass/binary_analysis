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

int freq[26]; //????a,b,c��,z??????????????????0

int main(){
char s[300]; //?????
int len;
int num=0;
char index,e;
int mark=0;

scanf("%s",s);
len=strlen(s);
for (int i=0;i<len;i++){
 	if((s[i]<='z') && (s[i]>='a')){  //???????a?z??
		index=s[i]-'a'; //???????????????a??0?,z??25??????
		freq[index]++;  //??????1
		}
}

for(num=0;num<26;num++){
	if(freq[num]>0){
		e=num+'a'; //???num?????
		printf("%c=%d\n",e,freq[num]);  //????????????
		mark=1;
	}
}
if (mark==0)
	printf("No");
return 0;
}