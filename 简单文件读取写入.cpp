#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
const int size = 60;
int main()
{
	char filename[size];
	ofstream outfile;
	outfile.open("f.txt");
	ifstream infile;
	cin.getline(filename, size);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "could not open the file:" << filename << endl;
		cout << "progream terminating." << endl;
		exit(exit_failure);
	}
	double count = 0.0, sum = 0.0, ans = 0.0;
	double value;
	infile >> value;
	while (infile.good())
	{
		count++;
		sum += value;
		infile >> value;
	}
	if (infile.eof())
		cout << "end of file reachen" << endl;
	else
		cout << "input terminated for unknow reason." << endl;
	if (count == 0)
		cout << "no date procesed" << endl;
	else 
	{
		outfile << "items read " << count << endl;
		outfile << "sum:" << sum << endl;
		outfile << "average:	" << sum / count << endl;
	}
	return 0;
}