
#include "header.h"
void main(){
	login();
	int ch;
 	while(1){
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");	
		printf("\n\t Book Movie Ticket \n");
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
		printf("\nEnter >1< To Insert A Movie\nEnter >2< To View All Movies\nEnter >3< To Find A Movie\nEnter >4< To Book A Ticket(s)\nEnter >5< To View All Recent Transactions\nEnter >0< To Exit \nEnter your Choice :");
	   	scanf("%d",&ch);
	   	system("clear");	
	   	switch (ch){
	    		case 1: insert_details();
	   			break;
			case 2: view_All();
	   			break;    		
			case 3: find();
	   			break;
			case 4: book_ticket();
				break;	
			case 5: old_records();
				break;
	    		case 0: exit(0);
	    		default: printf("Enter a valid option.");
	   	}
	 }
}
