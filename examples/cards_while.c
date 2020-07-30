#include <stdio.h>
#include <stdlib.h>
int main(){
	char card_name[3];
	int count = 0;
	while( card_name[0]!='X' ){
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
			if ((val>10) || (val<1)){
				printf("The value: %i is out of range\n", val);
				continue;
			}
		}
		if ((val > 2) && (val < 7)) {
			count++;
		} else if (val == 10) {
			count--; }
		printf("Current count: %i\n", count);
	}
}
