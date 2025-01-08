#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	// 𝓐 = U+1D4D0
	// 𝓪 = U+1D4EA
	// const unsigned int FREAKY_A = 0x1d4d0;
	// const char FREAKY_A[] = {0xf0, 0x9d, 0x93, 0x90, 0x00};
	// const unsigned int FREAKY_a = 0x1d4ea;
	// const char FREAKY_a[] = {0xf0, 0x9d, 0x94, 0xaa, 0x00};
	char epicchar[] = {0xf0, 0x9d, 0x01, 0x01, 0x00};	
	for (int w = 1; w < argc; w++){
		int c = 0;
		while (argv[w][c] != '\0'){
			char this_char = argv[w][c];
			if ('A' <= this_char && this_char < 'A'+26){
				//printf("%c", this_char + (FREAKY_A - A));
				epicchar[2] = 0x93;
				epicchar[3] = 0x90 + (this_char - 'A');
				printf("%s", epicchar);
			}
			else if ('a' <= this_char && this_char <= 'a'+26){
				//printf("%c", this_char + (FREAKY_a - a));
				if (this_char < 'w'){
					epicchar[2] = 0x93;
					epicchar[3] = 0xaa + (this_char - 'a');
				} else {
					// idk why i have to do this. i made this in 30 minutes leave me alone
					epicchar[2] = 0x94;
					epicchar[3] = 0x80 + (this_char - 'w');
				}
				printf("%s", epicchar);
			}
			else
				printf("%c", this_char);
			c++; //WHAT?!
		}
		printf(" ");
	}
	printf("\n");
	exit(0);
}
