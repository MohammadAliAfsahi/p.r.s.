#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct information
{
	char name;
};
void show_list_of_teams();
void print_situation_game(char *token, char *name, char *grade);
void print_list_of_games(char *name,char *grade);
int main()
{
	FILE *saved_game;
	if ((saved_game = fopen("savedgame.xls", "r+")) == NULL)
	{
		printf("Please Enter To Start a New Game\n");
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
					for (i = 0; i < 6; i++)
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
						case 2:
							char *grade;
							grade = strtok(NULL, ",");
							print_situation_game(token, name,grade);
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
						break;
					}
					//puts("");
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
	int step = 0;
	char name[10000];
	FILE *name_game = fopen("C:\\Users\\Mohammad Ali\\Documents\\Visual Studio 2017\\Projects\\PROJECT\\PROJECT\\Teams\\teams.txt", "r");
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		fgets(name, 100000000, name_game);
		strtok(name, ",");
		printf("%d. %s\t\t", ++step, name);
		if (step % 4 == 0)
		{
			puts(" ");
		}
	}

	system("pause");
}
void print_situation_game(char *token, char *name,char *grade)
{
	int step = 1;
	if (*token == 'A')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group A\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
				print_list_of_games(*name,*grade);
			}
		}
	}
	if (*token == 'B')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group B\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'C')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group C\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'D')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		//FILE *fileofgroups;
		//fileofgroups = fopen("groupd.txt", "r+");
		if (i + 1 == 5)
		{
			printf("Group D\n");
			for (int j = 0; j < 4; j++)
			{
				//fprintf(fileofgroups, "%d. %s\n\n", j + 1, nameofteams[j]);
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'E')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group E\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'F')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group F\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'G')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group G\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}
	if (*token == 'H')
	{
		static int i = 0;
		static char nameofteams[4][15];
		int num = 0;
		num = *grade - '0';
		strcpy(nameofteams[num], name);
		i++;
		if (i + 1 == 5)
		{
			printf("Group H\n");
			for (int j = 0; j < 4; j++)
			{
				char names[100];
				strcpy(names, nameofteams[j+1]);
				printf("%d. %s\n", j + 1, names);
			}
		}
	}

}
void print_list_of_games(char *name, char *grade)
{
	static int step = 0;
	if (step==0)
	{
		printf("%s Vs %s" );
	}
}