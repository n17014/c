#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int s,i,count=0;
srand(time(NULL));
for(i=0; i<100; i++){
s = rand() % 20 + 1 ;
printf("%d:%d\n",i+1,s);

if( s == 3){
	count += 1;
}

}
printf("%d\n",count);
printf("%d％です",count%100);
return 0;
}
