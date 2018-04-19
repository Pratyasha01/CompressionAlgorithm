#include<stdio.h>
int main()
{
	//Creating variables 
	int stringLength,distinctCharacter,numberOfTestCase;
	double solution,answer;
	//input number of test case
	scanf("%d",&numberOfTestCase);
	while(numberOfTestCase--)
	{
		//input string length and number of distinct character
		scanf("%d%d",&stringLength,&distinctCharacter);
		//Calculate the expected length of the compressed string
		solution=(double)(distinctCharacter-1)/distinctCharacter;
		answer=2*(1+solution*(stringLength-1));
		printf("%0.8f\n",answer);
	}
	return 0;
}
