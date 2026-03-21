#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	const int COUNT_SYMBOL = 81;
	int i = 0;
	char str[COUNT_SYMBOL];
	
	printf("Input phrase: ");
	fgets(str,sizeof(str),stdin);
	
	printf("%s", str);
	printf("\n");
	
	for (i = 0; i < sizeof(str); i++)
	{
		if (str[i] == 'a')
		{
			str[i] = 'A';
		}
		else if (str[i] == 'b')
		{
			str[i] = 'B';
		}
	}
	
	printf("%s", str);
	
	return 0;
}
