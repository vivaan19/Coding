
#include <bits/stdc++.h> 
using namespace std;
int count_words(string str)
{
    stringstream sample(str);
    string word;
    int count = 0;
    while(sample >> word)
    {
        count++;
    }
    return count;
}

int main()
{
    string sample = "my name is vivaan"
                    "I study in smit";
    

    cout << "Words in the string: " << count_words(sample);

}

/*
// CPP program to count words in a string 
// using stringstream. 
#include <bits/stdc++.h> 
using namespace std; 

int countWords(string str) 
{ 
	// breaking input into word using string stream 
	stringstream s(str); // Used for breaking words 
	string word; // to store individual words 

	int count = 0; 
	while (s >> word) 
		count++; 
	return count; 
} 

// Driver code 
int main() 
{ 
	string s = "geeks for geeks geeks "
			"contribution placements"; 
	cout << " Number of words are: " << countWords(s); 
	return 0; 
}
*/ 

