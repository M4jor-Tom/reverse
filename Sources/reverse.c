#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("Reverse: Write something.\n");
		return -1;
	}
	else
	{
		int word, letter;
		//reversing sentence
		for(word = argc - 1; word > 0; word--)
		{
			//Reversing word
			for(letter = strlen(argv[word]) - 1; letter > -1; letter--)
				printf("%c", argv[word][letter]);
			
			//Printing space
			if(word > 1)
				printf(" ");
		}
		return 0;
	}
}
