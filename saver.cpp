#include <stdio.h>
#include<stdlib.h>
#include <string.h>
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
	
	int z = 0;
	while(!(feof(saved_game))&&i<192){
	
	fscanf(saved_game, "%99s", name);
	if(j%6==0){
	//	printf("%s\n",name);
		strcpy(name_country[s1],name);
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
/*	for(i=0;i<32;i++){
	printf("%s\n",name_country[i]);	
	}
*/	
//for(i=0;i<32;i++){
	//printf("%d.%s\n",i+1,[i]);	
	//}
	//printf("%s\n",fedrasion[]);
}
