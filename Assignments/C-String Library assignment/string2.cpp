/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/



#include<iostream>
using namespace std;
int main()
{
	//array for string
	char st[50];
	cout<<"Enter a string:";
	cin.getline(st,50);
	//outer loop for complete string evaluation
	for(int i=0;st[i]!='\0';i++)
	{
		//converting very first letter of string to upper case if not.
		if(i==0)
		{
			if(st[i]>='a' && st[i]<='z')
			{
				st[i]=st[i]-32;
			}	
		}
		//converting first character to upper case after every "."
		else if(st[i]=='.')
		{
			i++;
			if(st[i]>='a' && st[i]<='z')
			{
				st[i]=st[i]-32;
			}	
		}
		//converting all remaining characters to lowercase.
		else if(st[i]>='A' && st[i]<='Z')
		{
			st[i]=st[i]+32;
		}
	}
	//output.
	cout<<"\nIts correct Sentence case form is:\n";
	cout<<st;
}
