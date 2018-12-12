/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/



#include<iostream>
using namespace std;
int main()
{
	//variable for length of string
	int len,
	//variable for no of words
	no_words=1;
	//array for string
	char st[50];
	cout<<"Enter a sentence:";
	cin.getline(st,50);
	//loop to calculate length of string
	for(len=0;st[len]!='\0';)
	{
		len++;
	}
	for(int i=0;st[i]!='\0';)
	{
		//condition to count all the words after " " or "."
		if((st[i]==' '||st[i]=='.')/*this conditon checks if dot is not on the last*/&&i!=len-1)
		{
			no_words++;
		}
		i++;
	}
	cout<<"\nNumber of words:"<<no_words;
}
