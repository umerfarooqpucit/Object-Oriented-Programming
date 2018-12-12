/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
using namespace std;
int main()
{
	//array for stirng
	char st[30],
	//array for substring
	sub[30];
	//variable for length of substring
	int len_sub=0,
	//variable for length of substring(if appeared in the string)
	len=0;
	cout<<"Enter a string:";
	cin.getline(st,30);
	cout<<"Enter substring:";
	cin.getline(sub,30);
	//outer loop for complete evaluation of substring
	for(;sub[len_sub]!='\0';len_sub++)
	{		
		//loop to check all elements of string for appearence of substring
		for(int k=0;st[k]!='\0';k++)
		{
			//to check if substring is found the plcae increment in inner length
			if(sub[len_sub]==st[k])
			{
				len++;
			}
		}
	}
	//to check if inner length is equal to length (> sign is used to check if sub is appeared more than one in the string) 
	if(len>=len_sub)
	{
		cout<<"\nSubstring found.";
	}
	else
	{
	 	cout<<"Not Found.";
	}
}
