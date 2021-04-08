#include <iostream>
using namespace std;
int factorial(int n) {
	if (n == 0) return 1;
	else return n *= factorial(n - 1);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "¬ведiть к-сть N доданкiв" << endl;
	cin >> size;
	int result = 1;
	int current_num = 1;
	int next_num;
	for (int i = 1; i < size; i++)
	{
		next_num = 2 * current_num + factorial(i);
		current_num = next_num;
		result += next_num;
	}
	cout << result;
}


/*INPUT: 7
OUTPUT: 7504*/
/*INPUT: 2
OUTPUT: 8*/
