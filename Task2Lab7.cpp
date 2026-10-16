#include<stdio.h>
int main()
{
	char logs[3][3][30];
	int i,j,k;
	int uppercase=0;
	for(i=0;i<3;i++){
		printf("Enter CSV log %d(username,status,time): ",i+1);
		scanf("%29[^,],%29[^,],%29[^\n]",logs[i][0],logs[i][1],logs[i][2]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;logs[i][j][k]!='\0';k++){
				if(logs[i][j][k]>='A' && logs[i][j][k]<='Z'){
					uppercase++;
				}
			}
		}
	}
	printf("\nTotal Uppercase Letters=%d",uppercase);
}
