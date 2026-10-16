#include<stdio.h>
int main()
{
	char secretmsgs[3][100];
	int i,j,spaces,words;
	for(i=0;i<3;i++){
		printf("Enter uppercase message %d: ",i+1);
		scanf(" %99[A-Z]",secretmsgs[i]);
	}
	printf("\n----Filtered Messages----\n");
	for(i=0;i<3;i++){
		spaces=0;
		words=0;
		for(j=0;secretmsgs[i][j]!='\0';j++){
			if(secretmsgs[i][j]==' '){
				spaces++;
			}
			else if(j==0 || secretmsgs[i][j-1]==' '){
				words++;
			}
		}
		printf("Message:%s\n",secretmsgs[i]);
		printf("Spaces=%d\n",spaces);
		printf("Words=%d\n",words);
	}
}
