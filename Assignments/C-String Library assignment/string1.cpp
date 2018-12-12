/* Name:MUHAMMAD UMER FAROOQ
ROLL NUM:BCSF15M025
*/

#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	//variable for length of word.
	int len=0;
	//aray for string
	char st[30]={0},
	//array for reverse of string
	rev[30]={0};
	cout<<"Enter a word:";
	cin>>st;
	//loop to calculate length of word entered
	while(st[len]!='\0')
	{
		len++;
	}
	//loop to place reverse value of string in rev array
	for(int j=len-1,k=0;j>=0;j--,k++)
	{
		rev[k]=st[j];
	}
	//checking if palindrome or not
	if(strcmp(st,rev)==0)
	 cout<<"It's a palindrome.";
	else
	 cout<<"It's not a palindrome.";
}
