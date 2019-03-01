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


char id[NUM][LEN],oldid[NUM][LEN],newid[NUM][LEN];
int  age[NUM];
int oldage[NUM],newage[NUM];
	int main(){
	int num;
	int i=0,j=0, k=0,n=0;
	int e_oldage;  
	char e_oldid[LEN];
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		scanf("%s %d ", id[i], &(age[i]));
	}
	for(i=0;i<num;i++){
		if(age[i]>=60){
                oldage[j]= age[i];  
				strcpy(oldid[j], id[i]);			
				j++;
		}else {
			newage[n]= age[i];  
			strcpy(newid[n], id[i]);
			n++;
		}
	}
	for(k = 1 ; k <= j; k++){
		for(i = 0; i < j- k; i++){
   			if(	oldage[i] < oldage[i+1]){
				e_oldage = oldage[i+1];   
				strcpy(e_oldid, oldid[i+1]);

				oldage[i+1] = oldage[i]; 
				strcpy(oldid[i+1], oldid[i]);

				oldage[i] = e_oldage;  
				strcpy(oldid[i], e_oldid);
			}		
		}
	}
	for(i=0;i<j;i++){
		printf("%s\n",oldid[i]);
	}
	for(i=0;i<n;i++){
		printf("%s\n",newid[i]);
	}
	return 0;
}