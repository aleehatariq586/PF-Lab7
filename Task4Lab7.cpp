#include <stdio.h>
int main()
{
    char word_grid[3][100];
    char longest[100],current[100];
    int i,j,k,len;
    int maxLen=0;
    int rowIndex=0,colIndex=0;
	for (i=0;i<3;i++)
    {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }
	for (i=0;i<3;i++)
    {
        j=0;
        int column=0;

        while(word_grid[i][j]!='\0')
        {
            if (word_grid[i][j]==' ')
            {
                j++;
                continue;
            }
			len = 0;
			while(word_grid[i][j]!=' ' && word_grid[i][j]!='\0')
            {
                current[len++]=word_grid[i][j++];
            }
			current[len]='\0';

            if(len>maxLen)
            {
                maxLen=len;
                rowIndex=i;
                colIndex=column;
				for(k=0;k<=len;k++)
                    longest[k]=current[k];
            }
			column++;
        }
    }
	printf("\nLongest word: %s\n",longest);
    printf("Length: %d\n",maxLen);
    printf("Row index: %d\n",rowIndex);
    printf("Column index: %d\n",colIndex);
}

