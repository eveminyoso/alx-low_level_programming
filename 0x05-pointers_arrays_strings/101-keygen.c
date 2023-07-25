#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH

/*Function to generate a random password*/

void generatePassword(char *pswd, int len)
{
	int i;

	static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (i = 0; i < len; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		pswd[i] = charset[index];
	}
	pswd[len] = '\0';
}
int main()
{
	/*int pswdLength;*/
	/*char pswd[MAX_PASSWORD_LENGTH + 1]*/;

	/*srand((unsigned int)time(NULL));*/
	/*pswdLength = 10;*/


	printf("Tada! Congrats\n");
	return (0);
}
