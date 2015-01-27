#include <stdio.h>

void prvi_program();

int main (int argc, char *argv[])
{
	prvi_program();

	getchar();   

	return 0;

}

void prvi_program()
{
	char word[80];
	/*printf ("Kak se zoves??????");*/
	printf("Have you got a dog? ");
	fgets(word, sizeof(word), stdin); 


	if ( strcmp(word, "yes") == 0)
	{
		printf("Vau!Vau! \t%s\n",word);
	}
	else
	{
		printf("Miau!Miau! \t%s\n",word);
	}

	return;
}
