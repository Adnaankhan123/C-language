#include<stdio.h>
int main(int argc, char const *argv[])
{
  int interest, rate, principle, time;
  printf("enter principle ");
  scanf("%d", &principle);
  printf("enter rate ");
  scanf("%d", &rate);
  printf("enter time ");
  scanf("%d", &time);
  interest = time*principle*rate/100;
  printf("the intrest is = %d ", interest);

    return 0;
}
