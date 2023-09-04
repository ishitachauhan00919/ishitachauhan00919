#include <stdio.h>

// output show in f2.txt file

void main()
{
	FILE *fp;
	int id;
	char name[30];
	float salary;
	fp = fopen("E:\\f2.txt", "w+"); // open for writing
	if (fp == NULL)
	{
		printf("File does not exists \n");
		return;
	}
	printf("Enter the id\n");
	scanf("%d", &id);
	printf("Enter the name \n");
	scanf("%s", name);
	printf("Enter the salary\n");
	scanf("%f", &salary);

	fprintf(fp, "Id= %d\n", id); // it send formatted output
	fprintf(fp, "Name= %s\n", name);
	fprintf(fp, "Salary= %.2f\n", salary);
	fclose(fp);
}