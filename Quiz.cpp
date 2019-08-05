# Quiz
Quiz Game is a simple console application. In this game number of questions are asked to the player,
and the player is awarded a prize for each correct answer given.

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>


 int count2=0;
 int main ()
 {
  int i,j;
  int count=0;
  int point;
  char choice;
  char name[15];
  beginning:

	 printf("\n\t WELCOME TO THE QUIZ...\n");
	 printf("\n");
	 printf("\n");
start:	 
	 printf("Press S to start game\n\n");
	 printf("Press any key to terminate\n");
	      choice=toupper(getch());
		  if (choice=='S')
		  {
		  	system("cls");
		  	printf("\nEnter your Name:\t");
		  	  gets(name);
		  	  system("cls");
		  	  printf("You must answer at least 2 questions out of 3 to enter the real quiz--------\n\n");
		  	 printf("Press Y to start qualifying round\n");
		  	 if(toupper(getch())=='Y')
			   {
		  		goto realquiz;
		  	}
		  		else{
		  		goto beginning;
			  } 
		realquiz:
		  system("cls");
		  for (i=1;i<=3;i++)
		  {
		  	switch(i){
		  		case 1:
		  			printf("Which continent is Nepal in?\n");
		  			printf("\n\nA. Asia\t\tB.Africa\n\nC.North America\t\tD. Europe");
		  			printf("\n");
		  				if(toupper(getch())=='A'){
		  					printf("\n\nCool and press enter to go next question");
		  					count++;
		  				    }
		  					else{
		  						getch ();
		  						printf("\n\nSorry,The answer is A. Asia");
		  						printf("\n\nPlay again\n");
		  						goto start;
		  						break;
							  }
							  getch ();
							  system("cls");
				case 2:
					printf("What is the height of mt.everest?\n");
					printf("\n\nA.8848\t\tB.8888\n\nC.7999\t\tD.8047\n");
					printf("\n");
						if(toupper(getch())=='A'){
		  					printf("\n\nCool and press enter to go next question");
		  					count++;
		  					
							  }
		  					else{
		  						printf("\nSorry,The answer is A.8848");
		  						printf("\n\nPlay again\n");
		  						goto start;
								  break;
							  }
							  getch ();
							  system("cls");
				case 3:
					printf("The largest river in the Nepal is?\n");
					printf("\n\nA.Mechi\t\tB.Karnali\n\nC.Koshi\t\tD.Gandaki\n");
					printf("\n");
						if(toupper(getch())=='C'){
		  					printf("\n\nCorrect!!Welcome to the main quiz:");
		  					count++;
		  					getch();
		  					goto logic;
		  				}
		  					else{
		  						printf("\nSorry,The answer is C.Koshi");			
							  getch ();
							goto logic;
						      }
						  }
				 }
	
	//logic	
	logic:	  if (count>=2)
	{
		  	goto here;
	}
		  	else {
		  		printf("Try again:");
		  		goto beginning;
			  }
		  

	here:
    	printf("\n\nCongratulations %s,you have successed the selection round!!",name);
		printf("\n\nPress any key to go for the first question!!!");
		if (getch( ))
		{
			goto pointgame;
		}
		
		//Quiz for money
pointgame:                               
	   for (j=0;j<6;j++)
	   {
	   	system("cls");
	   	switch(j){
	   			case 1:
		printf("\n\nWhat is the National Game of Nepal?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Kabbadi\t\tD.Baseball");
		printf("\n");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");
			count2++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.Kabaddi");
			   getch();
		       goto point;
		       break;
			   }

		case 2:
		printf("\n\n\nwho is the president of nepal,");
		printf("\n\nA.Bidhya Bhandari\t\tB.Prachanda\n\nC.Baburam Bhattarai\t\tD.Ram Baran Yadav");
		printf("\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			count2++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Bidhya Bhandari");
			   getch();
		      goto point;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		printf("\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count2++;
			getch();
			 break;}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.8");
			   getch();
		       goto point;
		       break;
			   }

        case 4:
		printf("\n\n\nwhere is the dangerous airport of world?");
		printf("\n\nA.Lukla\t\tB.Kathmandu\n\nC.Ilam\t\tD.Jhapa");
		printf("\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");count2++;
			getch();
			 break;
			 }
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Lukla");
				getch();
		       goto point;
		       break;
		       }

        case 5:
		printf("\n\n\nwhat is the area of Nepal");
		printf("\n\nA.1,47,181 sqkm\t\tB.1,37,889 sqkm\n\nC.1,85,889 sqkm\t\tD.2,14,181 sqkm");
		printf("\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			count2++;
			getch(); 
			break;
			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.1,47,181 sqkm");
		       getch();
		       goto point;
		       break;
		       }

		case 6:
		printf("\n\n\nNational bird of Nepal is............ ");
		printf("\n\nA.Crow\t\tB.Lhophophorus\n\nC.Eagle\t\tD.Humming Bird");
		printf("\n");
		if (toupper(getch())=='B' )
			{
			printf("\n\nCorrect!!!");
			count2++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Lhophophorus");
			   goto point;
		       getch();
		       break;
			   }     

		   }
		}
	
point:
             system("cls");                     //if  point then user gets 1000 Rs cash
			 point=(int)count2*1000;
			 if(point>0 && point<=60000){
			 printf("Congratulations %s, you have won Rs. %d",name,point);
	}
	else{
		printf("\n\n\t******** Bad Luck*****");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
     	puts("\n\n Press Y to win cash again");
	if (toupper(getch())=='Y')
	{
		goto beginning;
	}
	else
	{
		exit(0);
	}
}
		 
	
}
else
{
	exit(0);
}
}


