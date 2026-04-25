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
	
	char word[256];
			
	//int date_born;
	char name[255];
	//char lastname[255];
	//char sex[255];
	//char height[255];
	
	while (fgets(word,sizeof(word),open_file) != NULL)
	{
		//int value;
		
		if (sscanf(word,"%255s ",word) == 1)
		{
			strcpy(name,word + '\n');
			fprintf(output_file,word);
			//if (value >= after)
			//{
				//printf("Founded: %s\n", words);	
				//fprintf(output_file,words);
				
			//}
		}
	}
	
	fclose(open_file);
	
	return 0;
}
