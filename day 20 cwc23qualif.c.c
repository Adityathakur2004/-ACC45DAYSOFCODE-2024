#include <stdio.h>

int main() {
	int t;// number of test cases
	scanf("%d",&t);
	while(t--){
	    int R1,R2,R3,R4;
	    // read the decisions of the four refree
	    scanf("%d %d %d %d",&R1,&R2,&R3,&R4);
	    // check if all the refree consider the ball to be inside limits
	    if(R1==0 && R2==0 && R3==0 && R4==0){
	        printf("in\n");
	       } else
	        printf("out\n");
	    
	}
	return 0;

}

