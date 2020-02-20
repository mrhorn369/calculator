#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int total = 0;

	for(int i=0; i <= argc; i++)
	{
		total += atoi(argv[i]);
	}
	cout << total << " is the total" << endl;
    return 0;
}