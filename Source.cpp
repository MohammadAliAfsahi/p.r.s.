#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char p_name[10000];
	FILE *player_name = fopen("C:\\Users\\Mohammad Ali\\Documents\\Visual Studio 2017\\Projects\\PROJECT\\PROJECT\\Teams\\Brazil.txt", "r");
	int i = 0;
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}
}