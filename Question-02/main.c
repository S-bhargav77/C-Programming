#include <stdio.h>
int main(){
    int ans, t, sub;
    scanf("%d %d %d",&ans,&t,&sub);
    if(sub== 1){
        printf("Submission Not Allowed");
    }
    else if(ans>= 1&&t > 0){
        printf("Submission Allowed");
    }
    else{
        printf("Submission Not Allowed");
    }
   return 0;}
