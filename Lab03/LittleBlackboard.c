#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
	int limit = atoi(argv[2]);
	if(limit==0)
	{
		printf("Error, expected a numeric limit as argument 2\n");
		exit(1);
	}

	FILE *f = fopen("Datalog.txt", "w");
	if(f==NULL)
	{
		printf("stderr, Error opening file!\n");
		exit(1);
	}

	int i=0;
	char interrupt='Y';
	while(i<limit&&interrupt=='Y')
	{
		char name[100], id[20];
		printf("Enter name:\n");
		scanf("%s",name);
		printf("Enter ID:\n");
		scanf("%s",id);
		fprintf(f, "%s\t%s\n", name, id);

		if(i<limit-1)
		{
			printf("Do you wish to add more? [Y/n]: \t");
			scanf(" %c", &interrupt);
		}
		i++;
	}

	fclose(f);
	return 0;
}
