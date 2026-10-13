#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main()
{
	int start;
	int ende;
	int i;

	printf("Gib einen Start Wert ein");
		scanf_s("%i", &start);
	printf("Gib einen end Wert ein");
		scanf_s("%i", &ende);


	for (i = start; i <= ende; i++)
	{
		if (i % 7 == 0)
		{
			printf("%i\n", i);
		}
	}
}
