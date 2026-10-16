#include <stdio.h>
int main()
{
    int shifts[4][3];
    int i,j,index;
    printf("Enter production counts for 3 workstations:\n");
	for (i = 0; i < 3; i++)
    {
        printf("Workstation %d:\n", i);
        for (j=0;j<3;j++)
        {
            scanf("%d",&shifts[i][j]);
        }
    }
    printf("Enter row index for insertion(0 to 3): ");
    scanf("%d",&index);

    if (index<0 || index>3)
    {
        printf("Invalid row index!\n");
    }
    for(i=2;i>=index;i--)
    {
        for(j=0;j<3;j++)
        {
            shifts[i+1][j]=shifts[i][j];
        }
    }
    printf("Enter 3 new production values:\n");

    for(j=0;j<3;j++)
    {
        scanf("%d",&shifts[index][j]);
    }
    printf("\nUpdated Production Matrix:\n");
	for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",shifts[i][j]);
        }
        printf("\n");
    }
}

