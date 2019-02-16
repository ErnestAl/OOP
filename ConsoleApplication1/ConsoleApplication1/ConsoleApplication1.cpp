#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "Invalid arguments count\nUsage: copyfile.exe <input file> <output file>\n";
		return 1;
	}

	ifstream input(argv[1]);
	cout << argv[1] << " " << argv[2];
	return 0;
}