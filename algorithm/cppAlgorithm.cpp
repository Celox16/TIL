#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int num = 2;
	int range;
	bool isPrime = true;
	vector<int> prime;

	cout << "enter range" << endl;
	cin >> 

	for(int i = 0; i <= range; i++)
	{
		for(int j = 2; j < prime.size(); j++)
		{
			if(num % prime[i] == 0){
				isPrime = false;
				break;
			}
		}
		num++;
	}

	for(int i = 0; i< prime.size(); i++) {
		printf("%d ", prime[i]);
	}

	return 0;
}
