// ChefAndFriends.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char c[5] = { 'c','h','e','f','\0' };
	char* chef = &c[0];
	int hit = 0;
	
	while (n--) {
		string s;
		cin >> s;
		char *ctr = new char[s.size() + 1];
		ctr[s.size()] = 0;
		memcpy(ctr, s.c_str(), s.size());	
		//strcpy(ctr, s.c_str());
		while (*ctr != '\0') {
			if (*ctr == 'c' || *ctr == 'h' || *ctr == 'e') {
				if (*ctr == 'h') {
					chef++;
				}
				if (*ctr == 'e') {
					chef = chef + 2;
				}
				int temp = 0;
				while (*ctr == *chef) {
					temp++;
					ctr++;
					chef++;
				}
				if (temp >= 2) {
					hit++;
					temp = 0;
					chef = &c[0];
				}
				if (temp == 1) {
					temp = 0;
					chef = &c[0];
				}
			}
				else {
					ctr++;
					continue;					
				}			
		}
	}
			cout << hit << endl;
    return 0;
}

