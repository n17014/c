#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int s,i;
	s =rand() %20 + 1;
for(i=1; i<=100; i++){
	srand(time(NULL));
	printf("(%d:%d)\n",i,s);
}
	return 0;
}
