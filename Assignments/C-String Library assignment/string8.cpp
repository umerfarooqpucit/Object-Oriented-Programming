/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
using namespace std;
int main()
{
	//array for string input.
	char st[30];
	//counter variable for vowels.
	int count=0;
	cout<<"Enter a string:";
	cin.getline(st,30);
	//loop to calculate all vowels
	for(int i=0;st[i]!='\0';i++)
	{
		if(st[i]=='a' ||st[i]=='o' ||st[i]=='i' ||st[i]=='e' || st[i]=='u'|| st[i]=='A' ||st[i]=='E' ||st[i]=='I' ||st[i]=='O' || st[i]=='U')
		 count++;
	}
	cout<<"Total number of vowels:"<<count;
}
