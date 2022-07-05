#include <iostream>
#include <fstream>
#include <string>
#include "aoc1.h"

void day1Part1()
{
	std::ifstream filein("aoc01.txt");

	if (filein.is_open())
	{
		std::string input((std::istreambuf_iterator<char>(filein)), std::istreambuf_iterator<char>());

		int floor{ 0 };
		int pos{ 0 };

		for (char x : input)
		{
			x == '(' ? floor++ : floor--;
			pos++;

			if (floor == -1)
			{
				break;
			}
		}

		std::cout << "You have reached floor " << floor << " on character number " << pos << '\n';

		filein.close();
	}
	else
	{
		std::cout << "Could not open the file\n";
	}
}