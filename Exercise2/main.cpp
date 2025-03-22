#include <iostream>
#include <fstream>
#include <iomanip>

#include "funzioni.cpp"
#include "funzioni.hpp"

int main()
{
	std::ifstream fstr("data.txt");
	
	
	if(fstr.fail()) 
	{
		std::cerr << "File not found" << std::endl;
		return 1;
		}
		
	double val;
	double m;
	int n = 0;
	double sum = 0;
	std::ofstream printout("result.txt");
	printout << "#N Mean" << std::endl;
	printout << std::scientific << std::setprecision(16);
	while(fstr >> val)
	{
		n += 1;
		sum += map(val);
		m = sum/n;
		printout << n << " " << m << std::endl;
			
		}
    return 0;
}

