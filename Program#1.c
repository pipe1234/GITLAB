#include <stdio.h>
void main()
{
  int WinLotteryNo[10] = {8000, 1711, 3674, 7233, 5614, 8876, 1215, 4232, 9155, 9995};
  float WinAmount[10] = {50000, 18000, 10000, 5000, 5000, 5000, 4000, 3000, 3000, 2000};
  int N = 10;
  int i, won;

  int YourLotteryNo;

  printf("This is a github");
  scanf("%d", &YourLotteryNo);
  while (YourLotteryNo != 0)
  {
    won = 0;
    for (i=0;i<N && !won; i++)
    {
       if (YourLotteryNo == WinLotteryNo[i])
       {
          printf("Congratulations You Won %8.2f baht\n", WinAmount[i]);
          won = 1;
       }
    }
    if (!won)
      printf("Sorry Lottery Number %4d did not win\n", YourLotteryNo);
    printf("Enter your Lottery Number (0 to end): ");
    scanf("%d", &YourLotteryNo);
  }
  printf("GOODBYE");
  scanf("%d", &i);
}
