#include <iostream>
#include <cstring>
using namespace std;

void swap(char *s1, char *s2)
{
	char temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void permute(char *str, int startIndx, const int size)
{
	if(startIndx == size)
		cout << str << endl;
	else
	{
		for(int j=startIndx; j<size; j++)
		{
			swap((str+j),(str+startIndx));
			permute(str, startIndx+1, size);
			swap((str+startIndx),(str+j));
		}
	}
}


int main() {
	char str[] = "STRING";
	cout << "Given String is " << str << endl;
	cout << "Permutation of String:" << endl;
	permute(str,0, strlen(str));
	return 0;
}
