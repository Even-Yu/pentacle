//��*�Ż�һ�������
#include<iostream>
#include<windows.h>

int main()
{
	int line;//������
	int column;//������
	int temp;

	for (line=1;line<=8;line++)//��һ��ѭ�������˽�
	{
		for (column=1;column<=63;column++)
		{
			if (column <= (32-line) || column >= (32+line))
				std::cout << " ";
			else std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (temp=31; line <= 13; line++,temp-=4)//�ڶ���ѭ�������߽�
	{
		for (column = 1; column <= 63; column++)
		{
			if(column<(32-temp) || column>(32+temp))
				std::cout << " ";
			else std::cout << "*";
		}
		std::cout << std::endl;
	}

	for ( ;line<=22; line++,temp-=4)//������ѭ�����±�����
	{
		for (column = 1; column <= 63; column++)
		{
			if (line<=16)
			{
				if (column <= (32 - line) || column >= (32 + line))
					std::cout << " ";
				else std::cout << "*";
			}
			else
			{
				if(column <= (32 - line) || column >= (32 + line) || (column<(32 - temp) && column>(32 + temp)))
					std::cout << " ";
				else std::cout << "*";
			}
		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;
}