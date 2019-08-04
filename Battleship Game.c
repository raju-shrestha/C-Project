 //program to play battleship game.

Battleship Game Using C 
Battleship is a guessing game for two players (a computer and a person).
Each player must secretly place their ships on a grid which represent the location of the ships on a battlefield.
The player who successfully locates all their opponent’s ships first by hitting each square they occupy
is the winner as all ships have been destroyed.
	
#include<stdio.h>
#include<stdlib.h>
int main(){
	
char sea[4][4] = {{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'}};

	int r,c,i,ship,c1,c2; //co-ordinates
	int x,y; //Co-ordinates of x and y in a matrix

	printf("Lets start to play the battleship game:\n");
		for(c=0;c<4;c++)
				{
					printf("\t%d",c); // to print the column no after space.
				}
				printf("\n"); // for new line
		for (r=0;r<4;r++) // for the number of row.
	{
	        	printf("%d",r);	
		for(c=0;c<4;c++)
		{	
			printf("\t%c",sea[r][c]);
		}
		printf("\n");	
	}	
	x=rand()%4; //to find the remainder of random number on row
	y=rand()%4; //to find the remainder of random number on column
	
   	for(i=0;i<5;i++) //to play the game 5 times.
	{
		printf("\n");
		printf("Enter the coordinates of x and y to place the bomb! ROW AND COLUMN: ");
		scanf("%d %d",&c1,&c2);
		if(c1==x && c2==y)
		{
				printf("\t");
				for(c=0;c<4;c++)
				{
					printf("%d",c);
				}
				printf("\n");
				for (r=0;r<4;r++)
				{
					printf("\t%d",r);	
					for(c=0;c<4;c++)
					{	
						if(c1==r && c2 ==c)
						{
							sea[r][c]='b';
						}
						printf("\t%c",sea[r][c]);
					}
					printf("\n");	
				}	
			printf("CONGRATULATIONS BOMB IS BLAST!\n");
			break;
		}
		else 
		{
					printf("\t");
				for(c=0;c<4;c++)
				{
					printf("\t%d",c);
				}
				printf("\n");
				for (r=0;r<4;r++)
				{
					printf("\t%d",r);	
					for(c=0;c<4;c++)
					{	
	 					if(c1==r && c2 ==c)
						{
							sea[r][c]='m'; 
						}
					printf("\t%c",sea[r][c]);
					}
					printf("\n");	
				}	
			printf("YOU MISS!\n");
			continue;

		}
	}
	
	
}

