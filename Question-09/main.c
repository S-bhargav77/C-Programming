#include <stdio.h>
int main(){
    int y, m;
    scanf("%d %d", &y,&m);
       if(y< 1900 || y> 9999 || m < 1 || m > 12){
        printf("0");
        return 0;
    }
    int days;
    if(m==2){
          if((y%400==0) || (y%4==0 && y%100!=0)) days=29;
                  else days=28;
    } else if(m==4||m==6||m==9||m==11) days=30;
           else days=31;
      printf("%d Days", days);
    return 0;    }
