#include<iostream>
#include<string>
#include<vector>
using namespace std;

// vector stores 1 corresponding to index
// number which is already assigned
// to any char, otherwise stores 0
vector<int> usedNumbers(10);

// vector to store frequency of each char
vector<int> freq(26);

// structure to store char and its corresponding integer
struct node
{
	char character;
	int value;
};

// Function getNum to get the number corresponding to the string
int getNum(node* uniqueChar, const int count, string s)
{
	int val = 0, m = 1, j, i;

	for (i = s.length() - 1; i >= 0; i--)
	{
		char ch = s[i];
		for (j = 0; j < count; j++)
			if (uniqueChar[j].character == ch)
				break;

		val += m * uniqueChar[j].value;
		m *= 10;
	}

	return val;
}

// Recursive function to check solution for all permutations
bool permutation(const int count, node* uniqueChar, int index,
				string s1, string s2, string s3)
{
	// Base case
	if (index == count - 1)
	{

		// Check for all numbers not used yet
		for (int i = 0; i < 10; i++)
		{

			// If not used
			if (usedNumbers[i] == 0)
			{

				// Assign char at index n integer i
				uniqueChar[index].value = i;
				
				int num1=getNum(uniqueChar,count,s1);
				int num2=getNum(uniqueChar,count,s2);
				int num3=getNum(uniqueChar,count,s3);

				// If solution found
				if (num1+num2 == num3)
				{
					cout << "Solution found: ";
					for (int j = 0; j < count; j++)
						cout << " " << uniqueChar[j].character << " = "<< uniqueChar[j].value<<"\t";
					return true;
				}
			}
		}
		return false;
	}

	for (int i = 0; i < 10; i++)
	{

		// If ith integer not used yet
		if (usedNumbers[i] == 0) // usedNumbers[i] == false
		{

			// Assign char at index n integer i
			uniqueChar[index].value = i;

			// mark it as not available for other char
			usedNumbers[i] = 1; // usedNumbers[i] = true

			// Calling recursive function
			if (permutation(count, uniqueChar, index + 1, s1, s2, s3))
				return true;

			// Backtrack for all other possible solutions
			usedNumbers[i] = 0; //usedNumbers[i] = false
		}
	}
	return false;
}

void frequency(string s,int l)
{
	for (int i = 0; i < l; i++)
		++freq[s[i] - 'A'];
}

bool solveCryptarithmeticProblem(string s1, string s2, string s3)
{
	// count to store number of unique char
	int count = 0;

	// Function call to store the frequency of each character
	frequency(s1,s1.length());
	frequency(s2,s2.length());
	frequency(s3,s3.length());

	// ounting number of unique characters
	for (int i = 0; i < 26; i++)
		if (freq[i] > 0)
			count++;

	// Solution not possible for count greater than 10
	// There cannot be more than 10 unique characters
	if (count > 10)
	{
		cout << "Invalid strings";
		return 0;
	}

	// Array of nodes
	node uniqueChar[count];

	// Storing all the unique characters in letter
	for (int i = 0, j = 0; i < 26; i++)
	{
		if (freq[i] > 0)
		{
			uniqueChar[j].character = char(i + 'A');
			j++;
		}
	}
	return permutation(count, uniqueChar, 0, s1, s2, s3);
}

int main()
{
	string s1 = "APPLE";
	string s2 = "LEMON";
	string s3 = "BANANA";
	
	cout<<"\n"<<s1<<" + "<<s2<<" = "<<s3<<endl<<endl;

	if (solveCryptarithmeticProblem(s1, s2, s3) == false)
		cout << "No solution";
		
	return 0;
}