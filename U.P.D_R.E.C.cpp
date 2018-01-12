#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef struct clientData {
	unsigned int acctNum; 
	char Name[20]; 
	int age;
	char post[3];
	int Skill;
	int Fitness;
	int Form;
}; 

void updateRecord(FILE *fPtr, int Player_number);

int getLines(char *path)
{
	int lines = 0;
	char line[80];
	FILE *fp = fopen(path, "r");
	if (fp)
	{
		while (fgets(line, 100, fp))
		{
			lines++;
		}
		fclose(fp);
	}
	return lines;
	fclose(fp);
}

int main(void)
	{
	int pn;
	scanf("%d", &pn);
	if (pn>getLines("Argentina.txt") || pn<=0 )
	{
		printf("Invalid Input");
	}

	FILE *cfPtr=fopen("Argentina.txt", "r");

	updateRecord(cfPtr, pn);
		fclose(cfPtr);

} 

void updateRecord(FILE *fPtr, int Player_number)
{
	FILE *writePtr;
	FILE *fp = fopen("Argentina.txt", "r");
	int i = 0;
	char line[1500];
	bool flag;
	struct clientData client = { 0, "", 0,"", 0,0,0 };
	char *buf = { 0 };
	if (fp)
	{
		while (fgets(line, 1500, fp))
		{
			if (++i == Player_number)
			{
				
				buf = strtok(line, "	");
				if (buf)
					client.acctNum = atoi(buf);
				buf = strtok(NULL, "	");
				if (buf)
					strcpy(client.Name, buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					client.age = atoi(buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					strcpy(client.post, buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					client.Skill = atoi(buf);
				//get e.clas
				buf = strtok(NULL, "	");
				if (buf)
					client.Fitness = atoi(buf);
				//get e.seatNo
				buf = strtok(NULL, "	");
				if (buf)
					client.Form = atoi(buf);
				flag = true;
			}
			if (flag == true)
				break;
		}
	}

	int result;
	 
	int Skill, Fitness, Form;
	char pos[2];
	
	if (client.acctNum == 0)
	{
		printf("Account #%d has no information.\n", Player_number);
	}
	else {
		printf("%-6d%-16s%-6d%-11s%-6d%-6d%-6d\n\n", client.acctNum, client.Name, client.age, client.post, client.Skill, client.Fitness, client.Form);
		printf("%s", "Enter Number of pos ( + ) or ( - ): \n");
		printf("%s", "Enter Number of Skill ( + ) or ( - ): \n");
		printf("%s", "Enter Number of Fitness ( + ) or ( - ): \n");
		printf("%s", "Enter Number of Form ( + ) or ( - ): \n");
		scanf("%s", &pos);
		scanf("%d", &Skill);
		scanf("%d", &Fitness);
		scanf("%d", &Form);
		client.Skill += Skill;
		client.Fitness += Fitness;
		client.Form += Form;
		strcpy(client.post, pos);
		printf("%-6d%-16s%-6d%-11s%-6d%-6d%-6d\n", client.acctNum, client.Name, client.age, client.post, client.Skill, client.Fitness, client.Form);
		fseek(fPtr, (Player_number - 1) * sizeof(struct clientData), SEEK_SET);
		fwrite(&client, sizeof(struct clientData), 1, fPtr);
	}
	char *p_post;
	int p_skill, p_fitness, p_form;
	p_post=client.post;
	p_skill = client.Skill; 
	p_fitness = client.Fitness;
	p_form = client.Form;
	i = 0;
	if ((writePtr = fopen("Argentina2.txt", "w")) == NULL) {
		puts("File could not be opened.");

	} 
	else {
		rewind(fp);
		while (!feof(fp)) {
			fgets(line, 1500, fp);
			buf = strtok(line, "	");
			if (buf)
				client.acctNum = atoi(buf);
			buf = strtok(NULL, "	");
			if (buf)
				strcpy(client.Name, buf);

			buf = strtok(NULL, "	");
			if (buf)
				client.age = atoi(buf);
			if (++i == Player_number)
			{
				buf = strtok(NULL, "	");
				buf = strtok(NULL, "	");
				buf = strtok(NULL, "	");
				buf = strtok(NULL, "	");
				strcpy(client.post , p_post);
				client.Skill = p_skill ; 
				client.Fitness = p_fitness;
				client.Form = p_form;
			}
			else
			{
				buf = strtok(NULL, "	");
				if (buf)
					strcpy(client.post, buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					client.Skill = atoi(buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					client.Fitness = atoi(buf);
				
				buf = strtok(NULL, "	");
				if (buf)
					client.Form = atoi(buf);
			}
			fprintf(writePtr, "%d\t%s\t%d\t%s\t%d\t%d\t%d\t\n", client.acctNum, client.Name, client.age, client.post, client.Skill, client.Fitness, client.Form);

		}
		fclose(writePtr);
		fclose(fp);
	}
}