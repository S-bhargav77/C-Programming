#include <stdio.h>
int main(){
    int d,memb;
    printf("distance: ");
    scanf("%d", &d);
    printf("Member (1 for true, 0 for false): ");
    scanf("%d", &memb);
    int fare = 100;
    if(d > 10){
        fare += (d - 10) * 20;
    }
    if(memb == 1){
        fare = fare * 0.9; 
    }
    printf("Final Fare: %d", fare);
    return 0;
}
