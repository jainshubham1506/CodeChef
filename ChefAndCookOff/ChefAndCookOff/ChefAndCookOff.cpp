// ChefAndCookOff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	
	while (t-- > 0) {
		int arr[5]{0,0,0,0,0};
		for (int i = 0; i < 5; i++) {
			std::cin >> arr[i];
		}
			int sum = 0;
			for (int j = 0; j < 5; j++) {
				sum = sum + arr[j];
		}
			switch (sum)
			{
			case 0:std::cout << "Beginner"<<std::endl;
				break;
			case 1:std::cout << "Junior Developer" << std::endl;
				break;
			case 2:std::cout << "Middle Developer" << std::endl;
				break;
			case 3:std::cout << "Senior Developer" << std::endl;
				break;
			case 4:std::cout << "Hacker" << std::endl;
				break;
			case 5:std::cout << "Jeff Dean" << std::endl;
				break;
			}
			for (int k = 0; k < 5; k++) {
				arr[k] = 0;
			}
			
		}
	
    return 0;
}

