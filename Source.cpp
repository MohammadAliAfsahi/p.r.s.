#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct information
{
	char name;

};
void show_list_of_teams();
int main()
{
	FILE *saved_game;
	if ((saved_game = fopen("savedgame.xls", "r+"))==NULL)
	{
		printf("Start New Game\n");
		if (getchar() == 10)
		{
			show_list_of_teams();
		}
	}
	else
	{
		printf("Start New Game\n");
		printf("Continue Game");
	}
	
}
void show_list_of_teams()
{
	int step=0;
	char name[10000];
	FILE *name_game = fopen("c:\\Users\\eli\\Desktop\\teams.txt", "r");
		int i = 0;
		for (i = 0; i<32; i++) 
		{
			fgets(name, 100000000, name_game);
			strtok(name, ",");
			printf("%d. %s\n",++step, name);
		}
	
		system("pause");
}
