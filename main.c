#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, average;
	int sum;
	int grade[N_STUDENT];
	
	sum=0;
	for (i=0;i<N_STUDENT;i++)
	{
		printf("input 5 scores:");
		scanf("%d", &grade[i]);
		sum+=grade[i];
	}
    	
	average=sum/N_STUDENT;  
    printf("score average:%d\n", average);
	
	system("PAUSE");
	return 0;
}
