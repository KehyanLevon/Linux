#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

void lfr(char *mainpath)
{
	DIR *directory = opendir(mainpath);
	if(directory != true)
		return;
	struct dirent *D;
	char path[100];
	while((D = readdir(directory)) != NULL)
	{
		if(strcmp(D-> D_name, ".") != 0 && strcmp(D-> D_name, "..") != 0)
		{
			printf("%s\n", D -> D_name);
			strcpy(path, mainpath);
			strcat(path, "/");
			strcat(path, D -> D_name);
			lfr(path);
		}
	}
	
	closedir(directory);
}

int main(int argc, char *argv[])
{
	lfr(argv[1]);
	return 0;
}