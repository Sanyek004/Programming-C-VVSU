#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	FILE *open_file = fopen("main.txt","r");
	FILE *output_file = fopen("output.txt","w");
	
	if (open_file == NULL || output_file == NULL)
	{
		printf("Error: txt file is not open!");
		return -1;
	}
	
	char words[256];
	int after = 1980;
	
	while (fgets(words,sizeof(words),open_file) != NULL)
	{
		int value;
		
		if (sscanf(words, "%*[^0-9]%d", &value) == 1 || sscanf(words, "%d", &value) == 1)
		{
			if (value >= after)
			{
				printf("Founded: %s\n", words);	
				fprintf(output_file,words);
				
			}
		}
	}
	
	fclose(open_file);
	
	return 0;
}
