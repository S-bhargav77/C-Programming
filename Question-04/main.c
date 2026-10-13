#include <stdio.h>
int main(){
    int d1,c1,d2,c2;
    scanf("%d %d %d %d",&d1,&c1,&d2,&c2);
    int totalcents = c1 + c2;
    int totaldollars= d1 + d2 + (totalcents/100);
    totalcents = total_cents % 100;
    printf("%d\n%d", totaldollars, totalcents);
    return 0;
}
