#include <iostream>

using namespace std;

int main()
{
	int x;
	float y;
	cin >> x >> y;
	if (x <= y-0.5 && x % 5 == 0)
	{
		printf("%.2f", y - x - 0.5);
	}
	else
	{
		printf("%.2f", y);
	}
	return 0;
}