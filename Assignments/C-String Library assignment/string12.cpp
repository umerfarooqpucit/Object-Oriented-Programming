/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025

*/


#include<iostream>
using namespace std;
int main()
{
	//arrays for string1,string2 and string3.
	char string1[50]={0},string2[50]={0},string3[50]={0};
	//variables for length of string1,string2 and string3
	int len2=0,len3=0,len1=0,
	//variable for no. of chars of string2 found in string1
	temp_l=0,
	//variable to check if all values of string2 exist in string1
	found=0,
	//array to use when characters are not to be printed
	nul[50]={0};
	cout<<"Enter a word or sentence:";
	cin.getline(string1,50);
	cout<<"Enter a string to replace:";
	cin.getline(string2,50);
	cout<<"Enter a string to replace with:";
	cin.getline(string3,50);
	//loop to calculate length of string 2
	for(int i=0;string2[i]!='\0';i++)
	{
		len2++;
	}
	//loop to calculate length of string 3
	for(int i=0;string3[i]!='\0';i++)
	{
		len3++;
	}
	//loop to calculate length of string 1
	for(int i=0;string1[i]!='\0';i++)
	{
		len1++;
	}
	//loop to evaluate all values of string 1
	for(int k=0;string1[k]!='\0';k++,temp_l=0)
	{
		//loop to check how many values of string2 exist in string1
		for(int j=0,l=k;j<len2;j++,l++)
		{
			if(string2[j]==string1[l])
			{
				temp_l++;
			}
		}
		//condition to check if all values of string2 exist in string1
		if(temp_l==len2)
		{
			string1[k]='@';//puts "@" in the first value of string1 from where string2 starts, to use afterwards.
			//loop to put 0 on all index of string1 at which string2 exists that are not to be printed
			for(int l=1;l<len2;l++,k++)
			{
				string1[k+1]=0;
			}
			//puts "1" in found if string2 is found
			found=1;
		}
	}
	//if string2 is found then it prints the result otherwwise it prints substring not found.
	if(found==1)
	{
		for(int i=0;i<len1;i++)
		{
			//condition that prints string1 chars except "@" and when null is not 1.
			if(string1[i]!='@')
			{
				if(string1[i]!=0)
				{
					cout<<string1[i];
				}
			}
			//if string1's element is "@" then it prints string3.
			else
			{
				cout<<string3;
			}
		}
	}
	else
	{
		cout<<"Substring not found.";
	}
}


/*

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	char string1[50]={0},string2[50]={0},string3[50]={0};
	char nul[50]={0};
	int len=0;
	cout<<"Enter a word or sentence:";
	cin.getline(string1,50);
	cout<<"Enter a string to replace:";
	cin.getline(string2,50);
	cout<<"Enter a string to replace with:";
	cin.getline(string3,50);
	for(int i=0;string1[i]!=0;i++)
	{
		len++;
	}
	for(int i=0;i<len;i++)
	{
		for(int j=i,k=0;string1[j]!=' ';j++,k++)
		{
			nul[k]=string1[j];
		}
		if(strcmp(nul,string2)==0)
		{
			string1[i]='1';
			for(int j=i+1;string1[j]!=' ';j++)
			{
				string1[j]='\0';
			}
		}
		for(int k=0;k<30;k++)
		{
			nul[k]=0;
		}
	}
	for(int i=0;i<len;i++)
	{
		if(string1[i]!='1')
		{
			if(string1[i]!='\0')
			{	
				cout<<string1[i];
			}
		}
		else
		{
			cout<<string3;
		}
	}
}*/
	
