#include <iostream>
using namespace std;


int arr[20]; // array to be searched
int n; //number of element in the array
int i; //index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	// Accept Array elements 
	cout << "\n------------------------\n";
	cout << " Enter array elements \n";
	cout << "--------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}




void LinearSearch()
{
	char ch;
	int comparison; //number of comparison 

	do
	{
		// Accept the number to be searched 
		cout << "\nEnter the elements you want to search: "; //Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)  //langkah 2,3,4
		{
			comparison++;
			if (arr[i] == item)  //Langkah 5 a found
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparison: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}



int main()
{

}