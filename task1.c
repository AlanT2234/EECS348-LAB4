#include <stdio.h>

int main() {
	int Score = 0;
	while (Score!=1) {
		printf("Enter NFL score(Enter 1 to stop): ");
 		scanf("%d", &Score);
		if (Score == 1){
			printf("Score cannot be 1");
			break;
		}
		if (Score<0) {
			printf("Score cannot be negative");
			continue;
		}
		else {
			printf("Score accepted\n");
	
			printf( "Possible scoring combos: ");
			int found = 0;
			for (int TDPlus2 = 0; TDPlus2 * 8<= Score; TDPlus2++) {
				for (int TDPlus1 = 0; 8*TDPlus2+ TDPlus1 *7 <=Score ; TDPlus1++) {
					for (int TDNoExtra = 0;TDPlus2*8+ TDPlus1*7+  TDNoExtra * 6<=Score; TDNoExtra ++) {
					       for (int FG = 0; FG *3+ TDPlus2*8 + TDPlus1*7+ TDNoExtra*6<=Score ; FG++) {	
						       int last = Score - (8*TDPlus2 + 7*TDPlus1 + 6*TDNoExtra + 3*FG);
						       if (last%2 == 0) {
							       int Safety = last / 2;
							       printf("%d TD + 2Pt, %d TD +FG, %d TD, %d 3PT FG, %d Safety\n", TDPlus2, TDPlus1, TDNoExtra, FG, Safety);
							       found=1;
						       }
					       }
					}
				}
			}
			if (!found) {
				printf("No possible combos.\n");
			}
		}
	}
	return 0;
}
		
