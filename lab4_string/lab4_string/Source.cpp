#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;

	cout << "Enter first string\n";
	getline(cin, str1);
	cout << "Enter second string\n";
	getline(cin, str2);
	int N = str1.length();
	string *str3 = new string[N];
	int k = 0, count = 0;

	for (int i = 0; i < str1.length(); i++)
	{
		count = 0;
		for (int j = 0; j < str2.length(); j++)
		{
			if (str1[i] != str2[j])
			{
				count++;
			}
			else
			{
				count = 0;
				break;
			}
		}
		if (count != 0)
		{
			str3[k] = str1[i];
			k++;
		}
	}
	cout << "Result: ";
	for (int i = 0; i < k; i++)
	{
		cout << str3[i];
	}
	cout << endl;
	delete[] str3;
	system("pause");
	return 0;
}