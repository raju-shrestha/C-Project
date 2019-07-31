
//program to play the game rock paper & scissor

/*general information about the game to play
paper win the rock
scissor win the paper
rock win the scissor
takes value 1 for rock, 2 for paper, 3 for scissor.
*/
#include<stdio.h>
void  user( int,int); //to get int type value
void you_win()
   {
   printf("\nyou win\n\n");
   }
void you_lose()
  {
   printf("\nyou lose\n\n");
  }
void game_draw()
  {
   printf("\ngame draw\n\n");  
  }
 
  
int main()
{ 
   int choice, userchoice,cpchoice;
   char ch;
   int i;
   
	srand(time(NULL));
	do{

      printf("LETS PLAY ROCK PAPER & SCISSOR GAME\n");

	printf("1 for rock\n");
	printf("2 for paper\n");
	printf("3 for scissor\n");
	printf("4 for exit");
	printf("\n");
	printf("------------------------------------------");
	printf("\n\tEnter your choice :\n");
	
	scanf("%d",&userchoice);
	
	if(userchoice >4){
		printf("Invalid Input\n");
	}
	
	else{
	cpchoice=(rand()%3+1); 

//for user choice
	if(userchoice==1)
	{
		printf("you choose rocks\n");
	}
	
	else if(userchoice==2)
	  {
		printf("you choose paper\n");
	  } 
	
	else if(userchoice==3)
	 {
	  printf("you choose scissor\n");
     }
    
	   
     else if(userchoice==4){
     	exit(0);
	 }

// for computer choice
if (cpchoice==1)
 {
	printf("computer choose rock\n");
 }
else if(cpchoice==2)
	{
		printf("computer choose paper\n");
	} 
	else if(cpchoice==3)
	{
	printf("computer choose scissor\n");
    }
    

  user(userchoice,cpchoice);
}
	}while(userchoice!=4);
 //logic to play the game
  return 0;
}

void user(int userchoice,int cpchoice)
   {
   
if(userchoice==1)  //for user choice is rock (1)
{
  if(cpchoice==2)
     {
	  you_lose();
     }
     if(cpchoice==3) //computer choose scissor so rock win scissor
     {
       you_win();
	 }
}
 //for  user choice is paper (2)
if(userchoice==2) //2 for paper
 {
   if(cpchoice==2)
	{
		game_draw(); //both choose 2 i.e paper so game is draw
	}
	if(cpchoice==1) //computer choose rock
	{
	  you_win();	// computer choose 1 i.e rock but user choose 2 i.e paper so paper win rock
	}
	else if(cpchoice==3) //computer choose 3 i.e scissor but user choose 2 i.e paper
	{
	  you_lose(); // paper lose
	}
  } 


if(userchoice==3) //3 for scissor
  {
   if(cpchoice==3) //both chooose 3 i.e scissor
	{
	 game_draw(); //both choose scissor so game is draw
    }
 	if(cpchoice==1) //computer choose 1 i.e rock 
 	 {
 	  you_lose(); // scissor lose but rock win scissor
     }
 	 else if(cpchoice==2) //computer chose 2 i.e paper
 	  {
 		you_win(); //scissor wins paper
	  }
   }
}

