/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/



#include<iostream>
using namespace std;
int main()
{
	//array for string
	char st[30],
	//variable for character to remove
	ch;
	cout<<"Enter a string:";
	cin.getline(st,30);
	cout<<"Enter the character to remove:";
	cin>>ch;
	cout<<"Required string:";
	//loop to remove all occurrences of that character from string.
	for(int i=0;st[i]!='\0';i++)
	{
		if(st[i]!=ch && /*this condition removes spaces as in the expamle blank space is also removed however it's not necessary*/st[i]!=' ')
		{
			cout<<st[i];
		}
	}
}
