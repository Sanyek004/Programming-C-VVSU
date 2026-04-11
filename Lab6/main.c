#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	FILE *open_file = fopen("main.txt","r");
	FILE *output_file = fopen("output.txt","w");
	
	if (open_file == NULL || output_file == NULL)
	{
		printf("Error: txt file is not open!");
		return -1;
	}
	
	int after = 1980;
	char buffer_num[12];
	sprintf(buffer_num, "%d", after);
	
	char buffer[1000];
	size_t n = fread(buffer,1,sizeof(buffer) - 1, open_file);
	buffer[n] = '\0';
	
	char *found = strstr(buffer,buffer_num);
	
	if (found)
	{	
		char *after_num = found + strlen(buffer_num);
		printf("Найдено: %s\n",after_num);
	}
	else
	{
		printf("Не найдено\n");
	}
	
	return 0;
}
