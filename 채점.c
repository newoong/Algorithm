#include <stdio.h>


int Useransw(int *c)
{
	for (int i = 0; i < 20; i++)
	{
		printf("�л��� %d�� ���� ��: ", i + 1);
		scanf(" %d", &c[i]);
		if (c[0] == 0)
			return -1;
	}
	return 0;
}

int main(void)
{
//	int score[20] = {3,2,2,2,2,2,3,3,2,2,3,3,2,2,3,3,3,3,3,2}; //1ȸ
	int score[20] = {3,2,2,2,2,3,2,2,3,3,3,3,2,2,3,3,3,3,2,2};  //2ȸ

	int cntwrong[20] = { 0,0 };


//	int answer[20] = {4,4,3,1,3,1,3,4,1,3,1,4,4,2,5,5,3,2,2,3};  //1ȸ
	int answer[20] = {5,2,1,4,3,2,5,4,4,3,3,2,1,5,3,5,4,1,2,5};  //2ȸ

	int user[20] = { 0,0 };
	int tmp = 0;
	int total = 50;;

	

	
	printf("\n");
	

	while(1)
	{
		tmp=Useransw(user);
		if (tmp == -1)
			break; //wrong input
		total = 50;
		for (int j = 0; j < 20;j++)
		{
			if (answer[j] != user[j])
			{
				cntwrong[j]++;
				total -= score[j];
			}
		}
		printf("\n����: %d\n\n", total);		
	}
	for (int i = 0;i < 20;i++)
	{
		printf("%d�� ���� Ʋ�� ��: %d\n", i + 1, cntwrong[i]);
	}
}