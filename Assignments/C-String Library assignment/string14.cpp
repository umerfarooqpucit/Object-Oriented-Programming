/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//arrays for string 1 and string 2
	char st1[30]={0},st2[30]={0};
	cout<<"Enter First string:";
	cin.getline(st1,30);
	cout<<"Enter Second string:";
	cin.getline(st2,30);
	//conversion  of string1 to uppercase
	for(int i=0;st1[i]!='\0';i++)
	{
		if(st1[i]>='a' && st1[i]<='z')
		{
			st1[i]=st1[i]-32;
		}
	}
	//conversion  of string2 to uppercase
	for(int i=0;st2[i]!='\0';i++)
	{
		if(st2[i]>='a' && st2[i]<='z')
		{
			st2[i]=st2[i]-32;
		}
	}
	//comparison of both strings
	if(strcmp(st1,st2)==0)
	{
		cout<<"\nSame string.";
	}
	else
	{
		cout<<"\nDifferent string.";
	}

}    

	

