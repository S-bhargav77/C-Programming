#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float interest = (a *b *c) / 100.0;
    float amount = a+ interest;
    float discount = interest * 0.02;
    float finalsettlement = amount - discount;
    printf("%.2f\n%.2f\n%.2f\n%.2f", interest,amount,discount,finalsettlement);
    return 0;
}
