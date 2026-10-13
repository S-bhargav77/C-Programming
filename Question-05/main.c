#include <stdio.h>
int main(){
    float milage;
    int ptrl, d;
    scanf("%f %d %d", &milage, &ptrl, &d);
    if(milage* ptrl>= d){
        printf("Can reach");
    } else {
        printf("Cannot reach");
    }
    return 0;
}
