#include "stdafx.h"
#include "FileManager.h"
#include "Parser.h"
FileManager fm;
Parser pr;
int main()
{
	pr.Triangle(fm.LoadFromFile("p.txt"));
	int b;
	std::cin >> b;
    return 0;
}

