
//PROGRAM TO PLAY ALOO CROSS GAME USING C 
 #include <stdio.h> //standad input output function
 #include <conio.h>  //to use getch
 #include <string.h> //string function
 #include <stdlib.h> //library function
 #define max 20     //defining the maximum size of array
 
void reset(char table[3][3]);

int main()
{
	char name,check;   //declaration of variables
    int i = 0;
    int player = 0;
    int choice = 0;
    int row = 0; 
    int column = 0;
    int line = 0;
    int winner = 0;
    char name1[max],name2[max];
    char table[3][3] ={ 
      				   {'1','2','3'},
      				   {'4','5','6'},
     			  	   {'7','8','9'}
   					  };
again: //calling level to play the game again
reset(table);  //reset table and display initial table character 
winner =0; 

printf("PLAYER 1 ENTER YOUR NAME\n");
scanf("%s",&name1);
printf("PLAYER 2 ENTER YOUR NAME\n");
scanf("%s",&name2);
printf("\nLET'S PLAY THE GAME ALOO CROSS!\n");

for(i=0;i<9 && winner==0;i++) //value of i increases  from i=0 to less than 9 & no one is winner and display the player turn
{ 
	printf("\n\n"); //newline
	
    printf(" %c | %c | %c \n", table[0][0], table[0][1], table[0][2]); //display number in first row as character 
    	printf("---|---|---\n");
    	
    	printf(" %c | %c | %c \n", table[1][0], table[1][1], table[1][2]); //display number in second row as character 
    	printf("---|---|---\n");
    	
    	printf(" %c | %c | %c \n", table[2][0], table[2][1], table[2][2]); //display number in third row as character 
    	
    	player=i%2+1; // find the remainder & add 1, i starts from 0 & runs upto 8, remind the players turn each time
	   do 
	     {
	        printf("\nPlayer %d\t,please enter the number where you want to place your %c: ", player,(player==1)?'O':'X'); //to show O when player =1 & X when player=2
	            scanf("%d", &choice); //to get player's  number choice
	            
	 //logic to place the entered value of player
	         choice=choice-1; //decrease the entered value
	         row = choice/3;  //find row e.g if choice=5 then row=4/3=1 i.e row=1
	         column = choice%3; // find column e.g if choice=5 then column=4%3=1 i.e column=1 , so that character goes to table[row][column]=[1][1]
	        } while(choice<0 || choice>9 || table[row][column]>'9'); //value of choice lies between 0 to 9
        
        table[row][column] = (player == 1) ? 'O' : 'X';  //place '0' on the value of row & column e.g [1][1]
        
      if((table[0][0] == table[1][1] && table[0][0] == table[2][2]) ||
           (table[0][2] == table[1][1] && table[0][2] == table[2][0])) // check diagonal elements(character) are equal  
            winner = player;
        else
        
    //check equality of character in row-wise & column-wise to show winner 
            for(line = 0; line <= 2; line ++) //for 3 lines i.e rows
                
                if((table[line][0] == table[line][1] && table[line][0] == table[line][2])||   //if line =0 then [0][0]=[0][1] & [0][0]=[0][2]
                   (table[0][line] == table[1][line] && table[0][line] == table[2][line]))  //[0][0]=[0][1] & [0][0]=[0][2]
                    winner = player;      
}
    
    //diplay the  character in entered number place
    printf("\n\n"); //new line
    printf(" %c | %c | %c\n", table[0][0], table[0][1], table[0][2]);
    printf(" %c | %c | %c\n", table[1][0], table[1][1], table[1][2]);
    printf(" %c | %c | %c\n", table[2][0], table[2][1], table[2][2]);

    if(winner == 0) //check winner=0 or not
        {
         printf("\nGAME DRAW\n"); //if no one is winner
		}
     else
       {
         printf("\nCONGRATULATION PLAYER %d, YOU HAVE WON THE MATCH!\n", player);  // display message to winner
       }
     printf("\n"); // newline
     printf("Do you want to play continue again? press any key to play the game again or 'n' to exit !\n"); //to continue or exit the game
     printf("\n");
     fflush(stdin); //to clear the buffer
     scanf("%c",&check); 
     if(check=='n' || check=='N')
     exit(0);     //game exit if entered character is 'n' or 'N'
     else
        {	
     	  goto again; // go to level again at top
	    }

}


void reset(char t[3][3]) //reset previous entered value and set original number character
{
	strcpy(t[0],"123");      //to copy the string on array t[]
	strcpy(t[1],"456");      
	strcpy(t[2],"789");
}
