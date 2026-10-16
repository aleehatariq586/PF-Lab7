#include <stdio.h>
int main()
{
    float sensor_data[3][4];
    int i,j,index;
    printf("Enter temperature readings for 3 days and 4 sensors:\n");
	for(i=0;i<3;i++)
    {
        printf("Day %d:\n",i+1);
		for(j=0;j<4;j++)
        {
            scanf("%f",&sensor_data[i][j]);
        }
    }
    printf("Enter defective sensor column index(0 to 3): ");
    scanf("%d",&index);

    if (index<0 || index>3)
    {
        printf("Invalid column index!\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=index;j<3;j++)
        {
            sensor_data[i][j]=sensor_data[i][j+1];
        }
    }
    printf("\nUpdated Sensor Data(3x3):\n");
	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%8.2f",sensor_data[i][j]);
        }
		printf("\n");
    }
}

