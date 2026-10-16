#include<stdio.h>
int main()
{
	char studentnames[3][50];
	int marks[3][3];
	int i,j,sum;
	float average;
	for(i=0;i<3;i++){
		printf("Enter full name of student %d: ",i+1);
		scanf("%49[^\n]",studentnames[i]);
		printf("Enter marks of three subject:\n");
		for(j=0;j<3;j++){
			printf("Subject %d: ",j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	printf("\n-----Student Report-----\n");
	printf("%-25s %s\n",studentnames,average);
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum=sum+marks[i][j];
		}
		average=sum/3.0;
		printf("%-25s %.2f\n",studentnames[i],average);
	}
}
