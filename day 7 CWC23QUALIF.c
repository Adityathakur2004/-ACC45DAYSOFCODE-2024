#include <stdio.h>

int main() {
    int x,t;
	// read the number of test cases
	scanf("%d",&t);
	// process each test cases
	for(int i=0; i<t;i++){
	    // read the  starting time x
	    scanf("%d",&x);
	    // calculate the finish time after completing 3 assingment
	    int finishtime = x+3;
	    // check if he finishes by or before 10pm
	    if (finishtime <=10){
	    printf("yes\n");
	}else
	printf("no\n");
	}
	return 0;

}

