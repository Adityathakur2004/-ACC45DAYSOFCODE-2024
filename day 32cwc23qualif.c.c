#include <stdio.h>

int main(void) {
    int t,m=0,n=0,a=0,b=0,c,d,x,y;
    scanf("%d",&t);
     for(int i=0;i<t;i++){
        scanf("%d%d",&x,&y);
        m+=x;
        n+=y;
    if(m>n){
        c=m-n;
         if(c>a){
             a=c;
         }}
    else{
        d=n-m;
        if(d>b){
            b=d;
        }}
    }
	if(a>b)
        printf("1 %d",a);
    else
        printf("2 %d",b);
}

