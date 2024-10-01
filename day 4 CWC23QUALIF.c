#include <stdio.h>

int main() {
	// declare variables for topics
	int a,b,c,d;
	// read the input
	scanf("%d %d %d %d",&a,&b,&c,&d);
	// check if topic d is one of the topics a,b or c
    if(d==a|| d==b|| d==c){
        printf("yes\n");
    }else{
        printf("no\n");
    }
 return 0;
}
