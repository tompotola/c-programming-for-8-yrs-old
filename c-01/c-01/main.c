#include <stdio.h>

int main (int argc, char *argv[])
{
	char word[80];
	/*printf ("Kak se zoves??????");*/
	printf("Have you got a dog? ");
	fgets(word, sizeof(word), stdin); 
	printf("Vau!Vau! \t%s\n",word);


return 0;

	}
