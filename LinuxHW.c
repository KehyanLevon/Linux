#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	FILE *files[n];
	
	for(int i = 1; i <= n; i++)
	{
		char name[100];
		sprintf(name, "Salut%d.txt", i);
		files[i] = fopen(name, "w");
		fprintf(*(files + i), "Hallo, World %d\n", i);
		fclose(*(files + i));
	}
	return 0;
}