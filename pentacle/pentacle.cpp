//用*号画一个五角星
#include<iostream>
#include<windows.h>

int main()
{
	int line;//行坐标
	int column;//列坐标
	int temp;

	for (line=1;line<=8;line++)//第一重循环画顶端角
	{
		for (column=1;column<=63;column++)
		{
			if (column <= (32-line) || column >= (32+line))
				std::cout << " ";
			else std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (temp=31; line <= 13; line++,temp-=4)//第二重循环画两边角
	{
		for (column = 1; column <= 63; column++)
		{
			if(column<(32-temp) || column>(32+temp))
				std::cout << " ";
			else std::cout << "*";
		}
		std::cout << std::endl;
	}

	for ( ;line<=22; line++,temp-=4)//第三重循环画下边两角
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