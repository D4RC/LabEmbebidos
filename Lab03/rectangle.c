#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int area=0;
	
	int i=0;
	if(!strcmp(argv[1],"-a"))
	{
		area=1;
	}
	else if(!strcmp(argv[1], "-p"))
	{
		area=0;
	}
	else
	{
		printf("incorrect input, expected -a or -p for area or perimeter");
		return 0;
	}

	int l=0, w=0;

	for(i=2; i<argc; i++) {
		if(!strcmp(argv[i],"-l"))
		{
			l=atoi(argv[i+1]);	
		}
		else if(!strcmp(argv[i],"-w"))
		{
			w=atoi(argv[i+1]);
		}
	}

	printf("width=%d, lenght=%d\n", w,l);
	int res=0;
	if(area)
	{
		res=w*l;
		printf("area = %d units\n\n", res);
	}
	else
	{
		res=w+w+l+l;
		printf("perimeter = %d units\n\n", res);
	}
	return 0;
}

