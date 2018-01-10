#include <stdio.h>
#include<stdlib.h>
#include <string.h>
void teams(int b[32],int n);


int main() {
	FILE *saved_game = fopen("c:\\Users\\eli\\Desktop\\teams2.txt","rb");
	int i=0,j=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
	char name[100];
	char name_country[32][100]={NULL};
	char group[32][100];
	char num[32][100];
	char fedrasion[32][100];
	char sid[32][100];
	char filename[32][100];
	int b[32];
	int z = 0,n;
	while(!(feof(saved_game))&&i<192){
	
	fscanf(saved_game, "%99s", name);
	if(j%6==0){
	//	printf("%s\n",name);
		strcpy(name_country[s1],name);
		b[s1]=s1+1;
		s1++;
		}
		if(j%6 == 1){
		//printf("%s\n",name);
		strcpy(group[s2],name);
		s2++;
		
		}
		if(j%6==2){
		//printf("%s\n",name);
		strcpy(num[s3],name);
		s3++;
		}
		if(j%6==3){
		//printf("%s\n",name);
		strcpy(fedrasion[s4],name);
		s4++;
		}

		if(j%6==4){
		//printf("%s\n",name);
		strcpy(sid[s5],name);
		s5++;
		
		}
		if(j%6==5){
		//printf("%s\n",name);
		strcpy(filename[s6],name);
		s6++;
		}
	j++;
	i++;
}
		printf("please choose your team number:");
		scanf("%d",&n);
		teams(b,n);		


}



void teams(int b[32],int n){
	
	int i=0;
	char p_name[10000];
	FILE *player_name;
	printf("\nNUMBER   NAME          AGE      POST    SKILL   FORM   FITNES\n\n");
	if(b[0]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Argentina.txt", "r");
	
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	
	if(b[1]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Australia.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	
	if(b[2]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Belgium.txt", "r");
	
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[3]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Brazil.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[4]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Colombia.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[5]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Costarica.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[6]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Croatia.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[7]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Denmark.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[8]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Egypt.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[9]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\England.txt", "r");

	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[10]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\France.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[11]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Germany.txt", "r");

	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[12]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Iceland.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[13]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Iran.txt", "r");

	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[14]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Japan.txt", "r");

	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[15]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\KoreaRepublic.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[16]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Mexico.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[17]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Morocco.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[18]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Nigeria.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[19]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Panama.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[20]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Peru.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[21]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Poland.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[22]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Portugal.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[23]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Russia.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[24]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\SaudiArabia.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	
	if(b[25]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Senegal.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[26]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Serbia.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}

	if(b[27]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Spain.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[28]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Sweden.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[29]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Switzerland.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[30]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Tunisia.txt", "r");
		while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}
	if(b[31]==n){
	player_name= fopen("C:\\Users\\eli\\Desktop\\players\\Uruguay.txt", "r");
	while(!feof(player_name))
	{
		fgets(p_name, 100000000, player_name);
		strtok(p_name, ",");
		printf("%s\n", p_name);
	}	
	}

}


