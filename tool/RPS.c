#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


#define ROCK 100
#define PAPER 10
#define SCISSORS 1

int main()
{ 
  int player_throw = 0;
  int P2_throw = 0;
  bool draw = false;
  
  do
  {
    // accept the player throw
    printf("Select your throw.\n");
    printf("100) Rock\n");
    printf("10) Paper\n");
    printf("1) Scissors\n");
    
    printf("P1 Selection: ");
    scanf("%d", &player_throw);
     
    if (player_throw == ROCK)
      printf("\nP1 throws ROCK.\n");
    else if (player_throw == PAPER)
      printf("\nP1 throws PAPER.\n");
    else if (player_throw == SCISSORS)
      printf("\nP1 throws SCISSORS.\n");




    printf("\nP2 Selection: ");
    scanf("%d", &P2_throw);
    
    
    if (P2_throw == ROCK)
      printf("\nP2 throws ROCK.\n");
    else if (P2_throw == PAPER)
      printf("\nP2 throws PAPER.\n");
    else if (P2_throw == SCISSORS)
      printf("\nP2 throws SCISSORS.\n");
    
    // determine and output the winner, if any
    draw = false;
    if (player_throw == ROCK && P2_throw == SCISSORS)
      printf("\nROCK beats SCISSORS. P1 Wins.\n\n");
    else if (player_throw == ROCK && P2_throw == PAPER)
      printf("\nPAPER beats ROCK. P2 Wins.\n\n");
    else if (player_throw == SCISSORS && P2_throw == PAPER)
      printf("\nSCISSORS beats PAPER. P1 Wins.\n\n");
    else if (player_throw == SCISSORS && P2_throw == ROCK)
      printf("\nROCK beats SCISSORS. P2 Wins.\n\n");
    else if (player_throw == PAPER && P2_throw == ROCK)
      printf("\nPAPER beats ROCK. P1 Wins.\n\n");
    else if (player_throw == PAPER && P2_throw == SCISSORS)
      printf("\nSCISSORS beats PAPER. P2 Wins.\n\n");    
    else
    {
     
      printf("\nDRAW! Players Tied.\n\n");
      draw = true;
    }
  
  
  } while (draw);

  return 0;
}