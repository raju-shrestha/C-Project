// C Program for hospital ticketing by implementing a Queue using an Array //

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define MAX 5
void insert(int);
int delete();
void display();
int queue_array[MAX];
int front = - 1; //initially there are no element in queue array
int rear = - 1; //initially there are no element in queue array

int main() {
            int choice,num;
    printf("\t\n");
	printf("\t-----HOSPITAL TICKETING SYSTEM-----\n");
	printf("\n");
	while (1){
		printf("\n PRESS 1 TO RESERVE THE TOKEN NUMBER\t");  //insert token
		printf("\n PRESS 2 TO DELETE THE TOKEN AFTER GETING TICKET\t");  //to delete token after geting ticket
        printf("\n PRESS 3 TO DISPLAY RESERVED TOKEN NUMBER\t");  //display token number
        printf("\n PRESS 4 TO EXIT THE SYSTEM\t"); //exit the system
        printf("\n\n");
		printf("\n PRESS THE NUMBER ACCORDING TO YOUR CHOICE:\t");
		scanf("%d", &choice);
		switch (choice){
			case 1:
			printf("\n GET THE TOKEN NUMBER FOR TICKET\t");
			scanf("%d",&num);	
           	insert(num);
            break;
            
			case 2:
            num=delete(); //calling the delete function
            break;
            	
			case 3:
            display(); ////calling the display function
            break;
            	
			case 4:
            exit(1);  //to exit 
            	
			default:
            printf("\n\n INVALID CHOICE\n"); //any number other than 1,2,3,4 are invalid
        } 
    } 
} 
//Creating the function
//value of num is assign to token
void insert(int token){
    
	int insert_token, i, flag; //flag is boolen variable, it can be set or reset
    
	if (rear == MAX - 1) //if rear =4 then the value of MAX-1=4 so queue is full
    {
	  printf("\n\n SORRY,NO TOKEN AVAILABLE FOR TODAY\n");//queue is full so we cannot insert
    }
	else{
        if (front == - 1)  //intially the value of front is -1 since queue is empty
		front = 0;        //value of front is initialised to 0 after first token has been inserted
	   do{
	   	
        for(i=0; i<=MAX-1; i++)
        {
        	if(queue_array[i]==token)
			{
				printf(" THIS TOKEN NUMBER IS ALREADY RESERVED. CHOOSE ANOTHER ONE\n");
				flag=0;
				break;
			}
				else{	
					printf("\n\n  YOU GOT THE TOKEN TO RESERVE TICKET FOR CHECK UP:\n");
					rear = rear + 1;
         			queue_array[rear] = token; //queue_array [rear]=0
         			break;
					
				}	
		}
       }while(flag=0); //return to do loop
       
       	
    }
}
//Remove operation can be applied only if queue is not empty
int delete(int token){
    int	 delete_token;
    //if there is no token inserted or rear=max token no.+1 in array then we cannot delete since there are no any items
	if (front == - 1 || front==rear+1){
        printf("\n\n SORRY, TOKEN FINISH TO GET TICKET\n\n"); //queue is empty
        return ;
    }
    
	else{
        delete_token=queue_array[front];
        front = front + 1; // for token to be deleted the value of front=front+1 i.e.array[0]
        printf(" ONE TOKEN DELETED FROM FRONT WHO GOT TICKET\n", queue_array[front]);  //get ticken for check up
        return token;
    }
} 

void display(){
    int i;
	if (front == - 1||front==rear+1) //after deleting there are no token in an array
    {
	 printf("\n\n SORRY, THERE ARE NO TOKEN TO RESERVE\n\n"); //queue is empty
     return;
    }
	else{
        printf("\n THE RESERVE TOKEN NUMBER ARE\n");
        
		for (i = front; i <= rear; i++)
		{
		 printf("%d\n", queue_array[i]);
		}
     printf("\n");
    }
} 

