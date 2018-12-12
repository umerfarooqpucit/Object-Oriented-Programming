/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	//array for string input
	char st[100]={0},
	//variable to print lower case chars
	ch='a',
	//variable to print upper case chars
	Ch='A';
	//array to store frequency of lowercase alphabets
	int alpha[26]={0},
	//array to store frequency of uppercase alphabets
	Alpha[26]={0},
	//varible for the length of string
	len;
	cout<<"Enter a word or sentence (100 characters max) :\n";
	cin>>st;
	//calculation of length
	for(len=0;st[len]!='\0';)
	{
		len++;
	}
	//displays error message if lenght greater than 100
	while(len>100)
	{
		//empty the array to use again
		for(int i=0;i<len;i++)
	 	{
		 st[i]=0;
		}
		cout<<"\nYou can enter 100 characters max.Enter again:";
		cin>>st;
		for(len=0;st[len]!='\0';)
		{
			len++;
		}
	}
	//loop to evaluate all values of string
	for(int i=0;st[i]!='\0';i++)
	{
		//if value is an uppercase letter than it stores its frequency in coresponding array location.
		if(st[i]>='A' && st[i]<='Z')
		{
			if((st[i]-'A')==0)
			{
				Alpha[0]++;
			}
			if((st[i]-'A')==1)
			{
				Alpha[1]++;
			}
			if((st[i]-'A')==2)
			{
				Alpha[2]++;
			}
			if((st[i]-'A')==3)
			{
				Alpha[3]++;
			}
			if((st[i]-'A')==4)
			{
				Alpha[4]++;
			}
			if((st[i]-'A')==5)
			{
				Alpha[5]++;
			}
			if((st[i]-'A')==6)
			{
				Alpha[6]++;
			}
			if((st[i]-'A')==7)
			{
				Alpha[7]++;
			}
			if((st[i]-'A')==8)
			{
				Alpha[8]++;
			}
			if((st[i]-'A')==9)
			{
				Alpha[9]++;
			}
			if((st[i]-'A')==10)
			{
				Alpha[10]++;
			}
			if((st[i]-'A')==11)
			{
				Alpha[11]++;
			}
			if((st[i]-'A')==12)
			{
				Alpha[12]++;
			}
			if((st[i]-'A')==13)
			{
				Alpha[13]++;
			}
			if((st[i]-'A')==14)
			{
				Alpha[14]++;
			}
			if((st[i]-'A')==15)
			{
				Alpha[15]++;
			}
			if((st[i]-'A')==16)
			{
				Alpha[16]++;
			}
			if((st[i]-'A')==17)
			{
				Alpha[17]++;
			}
			if((st[i]-'A')==18)
			{
				Alpha[18]++;
			}
			if((st[i]-'A')==19)
			{
				Alpha[19]++;
			}
			if((st[i]-'A')==20)
			{
				Alpha[20]++;
			}
			if((st[i]-'A')==21)
			{
				Alpha[21]++;
			}
			if((st[i]-'A')==22)
			{
				Alpha[22]++;
			}
			if((st[i]-'A')==23)
			{
				Alpha[23]++;
			}
			if((st[i]-'A')==24)
			{
				Alpha[24]++;
			}
			if((st[i]-'A')==25)
			{
				Alpha[25]++;
			}
		}
		//if value is an lowercase letter than it stores its frequency in coresponding array location.
		else if(st[i]>='a' && st[i]<='z')
		{
			if((st[i]-'a')==0)
			{
				alpha[0]++;
			}
			if((st[i]-'a')==1)
			{
				alpha[1]++;
			}
			if((st[i]-'a')==2)
			{
				alpha[2]++;
			}
			if((st[i]-'a')==3)
			{
				alpha[3]++;
			}
			if((st[i]-'a')==4)
			{
				alpha[4]++;
			}
			if((st[i]-'a')==5)
			{
				alpha[5]++;
			}
			if((st[i]-'a')==6)
			{
				alpha[6]++;
			}
			if((st[i]-'a')==7)
			{
				alpha[7]++;
			}
			if((st[i]-'a')==8)
			{
				alpha[8]++;
			}
			if((st[i]-'a')==9)
			{
				alpha[9]++;
			}
			if((st[i]-'a')==10)
			{
				alpha[10]++;
			}
			if((st[i]-'a')==11)
			{
				alpha[11]++;
			}
			if((st[i]-'a')==12)
			{
				alpha[12]++;
			}
			if((st[i]-'a')==13)
			{
				alpha[13]++;
			}
			if((st[i]-'a')==14)
			{
				alpha[14]++;
			}
			if((st[i]-'a')==15)
			{
				alpha[15]++;
			}
			if((st[i]-'a')==16)
			{
				alpha[16]++;
			}
			if((st[i]-'a')==17)
			{
				alpha[17]++;
			}
			if((st[i]-'a')==18)
			{
				alpha[18]++;
			}
			if((st[i]-'a')==19)
			{
				alpha[19]++;
			}
			if((st[i]-'a')==20)
			{
				alpha[20]++;
			}
			if((st[i]-'a')==21)
			{
				alpha[21]++;
			}
			if((st[i]-'a')==22)
			{
				alpha[22]++;
			}
			if((st[i]-'a')==23)
			{
				alpha[23]++;
			}
			if((st[i]-'a')==24)
			{
				alpha[24]++;
			}
			if((st[i]-'a')==25)
			{
				alpha[25]++;
			}
		}
	}
	//printing of frequency of uppercase letters
	cout<<"\nFrequency table:UPPERCASE:";
	for(int j=0;j<26;j++,Ch++)
	{
		//prints all frequencies except 0
		if(Alpha[j]!=0)
		{
			cout<<endl<<Ch<<"     "<<Alpha[j];
		}
	}
	//printing of frequency of lowercase letters
	cout<<"\n\n\nFrequency table:lowercase:";
	for(int j=0;j<26;j++,ch++)
	{
		//prints all frequencies except 0
		if(alpha[j]!=0)
		{
			cout<<endl<<ch<<"     "<<alpha[j]; 
		}
	}
	Ch='A';
	//printing of pictgram of uppercase letters
	cout<<"\n\n\nPictogram:\n\n";
	for(int j=0;j<26;j++,Ch++)
	{
		if(Alpha[j]!=0)
		{
			cout<<endl<<Ch<<"    ";
			for(int k=0;k<Alpha[j];k++)
			{
				cout<<"$ ";
			}
		}
	}
	
}    

