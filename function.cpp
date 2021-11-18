#include "middle_str.h"

void itc_calculate_coordinates()
{
	int OX = 0, OY = 0;
	string str = "";
	int num = 0;
	while (str != "000")
	{
		cin >> str;
		if (str != "000")
			cin >> num;
		if (str == "North" || str == "South")
		{
			if (str == "South")
				num *= -1;
			OY += num;
		}
		else if (str == "East" || str == "West")
		{
			if (str == "West")
				num *= -1;
			OX += num;
		}
	}
	cout << OX << " " << OY;
}