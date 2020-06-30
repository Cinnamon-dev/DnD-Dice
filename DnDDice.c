#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int roll;
int i;
int dice;
int dTwo(){
        printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%2 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dFour(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%4 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dSix(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%6 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dEight(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%8 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dTen(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%10 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dHundred(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%100 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dTwelve(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%12 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int dTwenty(){
	    printf("How many times would you like to roll? "); scanf("%d", &roll);
	    for (i=0; i < roll; ++i)
	        {
	        dice = ( rand()%20 + 1);
	        printf("%d \n", dice);
	        }
	    return 0;
	}
int main()
{   printf("o()xxxx[{::::::::::::::::::::::::::::::::::> \n");
	printf("Hello traveller! What dice are we rolling today? \n");  
	printf("(1) D2: Just the flip of a coin! \n"); printf("(2) D4: A four sided dice \n");
	printf("(3) D6: A cube, six sided dice \n"); printf("(4) D8: Eight sided dice \n");
	printf("(5) D10: Ten sided dice \n"); printf("(6) D00: Hundred sided dice \n");
	printf("(7) D12: Twelve sided dice \n"); printf("(8) D20: Most important dice, twenty sides \n"); // Choices menu
	printf("Please choose from (1 - 8) \n");
	printf("o()xxxx[{::::::::::::::::::::::::::::::::::> \n");
	int choice; scanf("%d", &choice);
	switch(choice){
	case 1:

	            dTwo(roll);
	            break;
	case 2:

                dFour(roll);
                break;
	case 3:

                dSix(roll);
                break;
	case 4:

                dEight(roll);
                break;
	case 5:
                dTen(roll);
                break;
	case 6:

                dHundred(roll);
                break;
	case 7:

                dTwelve(roll);
                break;
	case 8:

                dTwenty(roll);
                break;
	default:
		printf("Enter a number betwene 1 & 8 \n"); 
		main(); } 
	return 0;
	 }

