#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int i;
	int cnt = 0;
	
	do {
		printf("input a number : ");
		scanf("%i", &i);
		if ( i < answer ) {
			printf("low!\n");
			cnt++;
		}
		else if ( i > answer ) {
			printf("high!\n");
			cnt++;
		}
		else {
			cnt++;
			printf("Congratulation! trials : %i\n", cnt);
			break;
		}
	} while(i != answer);
		
	return 0;
}
