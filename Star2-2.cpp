/**
2439 �����

00*
0**
***
�̷��������� �̾Ƴ�����

**/
#include <cstdio>

int N;  //�� �Է¹ޱ�
void main()
{
	int i,j;

	while(scanf("%d",&N)<=100)
	{
		for(i=1;i<N+1;i++){//1���� �ٺ��� ����, ���° ������ Ȯ��
			
			for(j=N;j>=i+1;j--)  //1��° �ٿ��� 
			{
				printf("*");
				//����
				printf("\n");
			}
			printf("\n");
		}

	}
	

}


