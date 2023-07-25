#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH

/*Function to generate a random password*/

int main()
{
	char pswd[84];
	int index = 0, sum = 0, dif_1, dif_2;

	srand(time(0));

	while (sum < 2772)
	{
		pswd[index] = 33 + rand() % 94;
		sum += pswd[index++];
	}
	pswd[index] = '\0';
	if (sum != 2772)
	{
		dif_1 = (sum - 2772)/2;
		dif_2 = (sum - 2772)/2;

		if ((sum - 2772) % 2 != 0)
		{
			dif_1++;
		}
		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + dif_1))
			{
				pswd[index] -= dif_1;
				break;
			}
		}
		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + dif_2))
			{
				pswd[index] -= dif_2;
				break;
			}
		}
	}
	printf("%s", pswd);
	return (0);
}
