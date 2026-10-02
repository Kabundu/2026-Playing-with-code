#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDie(int);
int rollDice();
void printWinner();
void printLoser();
int rollLoop(int);

int main()
{
  srand(time(0));

  puts("welcome to street dice!!");
  int roll = rollDice();
  if(roll == 7 || roll == 11)
  {
      printWinner();
      return 0;
  }
  if (roll ==2 || roll ==3 || roll == 12)
  {
     printLoser();
     return 0;
  }
  int state = rollLoop(roll);

  if(state == 0)
  {
    printLoser();
  }
  else
  {
    printWinner();
  }

  return 0;
}

int rollDice()
{
   int d1 =rollDie(6);
   int d2 = rollDie(6);
   int total = d1 + d2;
   printf("you rolled d%d and d%d for a total of %d\n", d1, d2, total);
   return total;
}

int rollLoop(int point)
{
    int total = rollDie(6) + rollDie(6);

    if(total == 7)
    {
        return 0;
    }

    if(total == point)
    {
        return 1;
    }

    return rollLoop(point);
}

int rollDie(int sides)
{
// rand % choice + start
  int r = rand() % sides + 1;
  return r;
}

void printWinner()
{
    puts("Winner Winner chicken dinner!!");
}

void printLoser()
{
    puts("Loser Loser Mr Ussop");
}


