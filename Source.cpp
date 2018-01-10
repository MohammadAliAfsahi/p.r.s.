#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct information
{
	char name;

};
void show_list_of_teams();
void print_situation_game(char *token,char *name);
int main()
{
	FILE *saved_game;
	if ((saved_game = fopen("savedgame.xls", "r+"))==NULL)
	{
		printf("Start New Game\n");
		if (getchar() == 10)
		{
			show_list_of_teams();
			FILE *fp = fopen("C:\\Users\\Mohammad Ali\\Documents\\Visual Studio 2017\\Projects\\PROJECT\\PROJECT\\Teams\\teams.txt", "r");
			char *token;
			int i;
			if (fp != NULL)
			{
				char line[1000];
				while (fgets(line, 1000, fp) != NULL)
				{
					for (i = 0; i<6; i++)
					{
						switch (i)
						{
						case 0:
							char *name;
							name = strtok(line, ",");
							//printf("%s\t", token);
							//break;
						case 1:
							token = strtok(NULL, ",");
							print_situation_game(token,name);
							break;
						case 2:
							token = strtok(NULL, ",");
							
							break;
						case 3:
							token = strtok(NULL, ",");
							
							break;
						case 4:
							token = strtok(NULL, ",");
							
							break;
						case 5:
							token = strtok(NULL, ",");
							break;
						default:
							break;
						}
					}
					puts("");
				}
				system("pause");
				fclose(fp);
			}
			else {
				perror("C:\\Users\\Mohammad Ali\\Documents\\Visual Studio 2017\\Projects\\PROJECT\\PROJECT\\Teams\\teams.txt");
			}
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
	FILE *name_game = fopen("C:\\Users\\Mohammad Ali\\Documents\\Visual Studio 2017\\Projects\\PROJECT\\PROJECT\\Teams\\teams.txt", "r");
		int i = 0;
		for (i = 0; i<32; i++) 
		{
			fgets(name, 100000000, name_game);
			strtok(name, ",");
			printf("%d. %s\t",++step, name);
			if (step%8==0)
			{
				puts(" ");
			}
		}
	
		system("pause");
}
void print_situation_game(char *token,char *name)
{
	
	if (*token == 'D')
	{
		printf("%s\n",name);
	}
}