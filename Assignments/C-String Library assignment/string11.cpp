/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/




#include<iostream>
using namespace std;
int main()
{
	//array for string input 
	char st[50];
	cout<<"Enter a string:";
	cin.getline(st,50);
	cout<<"\nIts correct Sentence case form is:\n";
	//loop to evaluate all elements of string
	for(int i=0;st[i]!='\0';i++)
	{
		//condition to put a space before every uppercase letter and convert it to lowercase except 1st letter
		if(st[i]>='A' && st[i]<='Z' && i!=0)
		{
			cout<<" ";
			st[i]=st[i]+32;
			cout<<st[i];
		}
		//if there is no uppercase letter then it prints simply.
		else
		{
			cout<<st[i];
		}
	}
}
