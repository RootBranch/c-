#include <iostream>
using namespace std;
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
	char ruler[Len];
	for (int i = 0; i < Len - 2; i++)
		ruler[i] = ' ';
	int minn = 0;
	int maxn = Len - 2;
	ruler[Len - 1] = '\0';
	ruler[minn] = '|';
	ruler[maxn] = '|';
	cout << ruler << endl;
	for (int i = 0; i < Divs; i++)
	{
		subdivide(ruler, minn, maxn, i + 1);
		cout << ruler<<endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';
	}
	return 0;
}
void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (low + high) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}