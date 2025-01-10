#include <stdio.h>
#include <stdlib.h>

// take in a null terminated string and freakyprint it
void freakyprint(char* word){
	// const char FREAKY_A[] = {0xf0, 0x9d, 0x93, 0x90, 0x00};
	// const char FREAKY_a[] = {0xf0, 0x9d, 0x94, 0xaa, 0x00};
	char epicchar[] = {0xf0, 0x9d, 0x01, 0x01, 0x00};   
	int c = 0;
	while (word[c] != '\0'){
		if ('A' <= word[c] && word[c] < 'A'+26){
			//printf("%c", this_char + (FREAKY_A - A));
			epicchar[2] = 0x93;
			epicchar[3] = 0x90 + (word[c] - 'A');
			printf("%s", epicchar);
		}
		else if ('a' <= word[c] && word[c] <= 'a'+26){
			//printf("%c", this_char + (FREAKY_a - a));
			if (word[c] < 'w'){
				epicchar[2] = 0x93;
				epicchar[3] = 0xaa + (word[c] - 'a');
			} else {
				// idk why i have to do this. i made this in 30 minutes leave me alone
				epicchar[2] = 0x94;
				epicchar[3] = 0x80 + (word[c] - 'w');
			}
			printf("%s", epicchar);
		}
		else
			printf("%c", word[c]);
		c++; //WHAT?!
	}
}


int main(int argc, char** argv){
	// 𝓐 = U+1D4D0
	// 𝓪 = U+1D4EA
	char epicchar[] = {0xf0, 0x9d, 0x01, 0x01, 0x00};
	for (int w = 1; w < argc; w++){
		freakyprint(argv[w]);
		printf(" ");
	}
	printf("\n");
	exit(0);
}
