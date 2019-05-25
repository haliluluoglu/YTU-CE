#include <stdio.h>

#define WORDS 2415

void main()
{
	FILE *file;
	char words[WORDS];
	char line[5];
	int i=0;
	
	file=fopen("kelime.txt", "r");
	if(file==NULL)
	{
		printf("[ERROR]! File can not open.\n");
		return -1;
	}
	else
	{
		printf("[INFORMATION]! File opened with succes.\n");
	}
	
	while(!feof(file))
	{

  		fgets(line,5,file);
  		strcpy(words[i],line);
  		//words[i]=strdup(line);
  		//puts(words[i]);
		i++;
	}
	
	while(fgets(line, sizeof line, file)!=NULL) {		//satir -satir okuma islemi

        words[i]=strdup(line); 						//okunan kelimelerin kelimeler dizisine yazilmasi
        printf("%s\n", words[i]);
        i++;
    }

}
