#include <stdio.h>
#include <stdlib.h>
int main(){
	char card_name[3];
	puts("Enter the card name: ");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]){
		case 'A':
			val = 11;
			break;
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		default:
			val = atoi(card_name);	
	}
	printf("The card value is %i\n", val);
}
