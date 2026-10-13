#include <stdio.h>
int main(){
    int total, x, y;
    scanf("%d %d %d",&total, &x, &y);

    int ben = (total * x) / 100;
    int remaining1 = total - ben;
    int blackbeard = (remaining1 * y) / 100;
    int remaining2 = remaining1 - blackbeard;
    int each_pirate = remaining2 / 3;

    printf("%d\n%d\n%d", ben, blackbeard, each_pirate);
    return 0;
}
