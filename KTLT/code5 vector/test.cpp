#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

int main()
{
	srand(time(0)); // set initial seed value to system clock

	for (int count = 0; count < 10; ++count)
	{
		cout << rand() << "\t";

		// If we've printed 5 numbers, start a new row
		if ((count + 1) % 5 == 0)
			cout << endl;
	}

	return 0;
}
