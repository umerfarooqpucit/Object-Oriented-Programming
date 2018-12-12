/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/



#include<iostream>
using namespace std;
int main()
{
	/*
	//array for string input
	char st[30]={0},
	//variable to print the max occurred character(s)
	ch={0};
	//array to store frequency of alphabets
	int alpha[26]={0},
	//variable to store max frequency
	max=0;
	cout<<"Enter a word or sentence:";
	cin.getline(st,30);
	//loop to check all values of string
	for(int i=0;st[i]!='\0';i++)
	{
		//condition to convert to lower case for convinience.(as case sensitive is not mentioned in the problem).
		if(st[i]>='A' && st[i]<='Z')
		{
			st[i]=st[i]+32;
		}
		//conditions to check each character and store its frequency in coresponding array location. (0 to 25 -- a to z)
		if((st[i]-'a')==0)
		{
			alpha[0]++;
		}
		else if((st[i]-'a')==1)
		{
			alpha[1]++;
		}
		else if((st[i]-'a')==2)
		{
			alpha[2]++;
		}
		else if((st[i]-'a')==3)
		{
			alpha[3]++;
		}
		else if((st[i]-'a')==4)
		{
			alpha[4]++;
		}
		else if((st[i]-'a')==5)
		{
			alpha[5]++;
		}
		else if((st[i]-'a')==6)
		{
			alpha[6]++;
		}
		else if((st[i]-'a')==7)
		{
			alpha[7]++;
		}
		else if((st[i]-'a')==8)
		{
			alpha[8]++;
		}
		else if((st[i]-'a')==9)
		{
			alpha[9]++;
		}
		else if((st[i]-'a')==10)
		{
			alpha[10]++;
		}
		else if((st[i]-'a')==11)
		{
			alpha[11]++;
		}
		else if((st[i]-'a')==12)
		{
			alpha[12]++;
		}
		else if((st[i]-'a')==13)
		{
			alpha[13]++;
		}
		else if((st[i]-'a')==14)
		{
			alpha[14]++;
		}
		else if((st[i]-'a')==15)
		{
			alpha[15]++;
		}
		else if((st[i]-'a')==16)
		{
			alpha[16]++;
		}
		else if((st[i]-'a')==17)
		{
			alpha[17]++;
		}
		else if((st[i]-'a')==18)
		{
			alpha[18]++;
		}
		else if((st[i]-'a')==19)
		{
			alpha[19]++;
		}
		else if((st[i]-'a')==20)
		{
			alpha[20]++;
		}
		else if((st[i]-'a')==21)
		{
			alpha[21]++;
		}
		else if((st[i]-'a')==22)
		{
			alpha[22]++;
		}
		else if((st[i]-'a')==23)
		{
			alpha[23]++;
		}
		else if((st[i]-'a')==24)
		{
			alpha[24]++;
		}
		else if((st[i]-'a')==25)
		{
			alpha[25]++;
		}
	}
	//loop to calculate max frequency
	for(int j=0;j<26;j++)
	{
		if(max<alpha[j])
	    {
	   		max=alpha[j];
    	}
	}
	cout<<"\nHighest character(s):";
	//loop to print highest occurred character(s).
	for(int i=0;i<26;i++)
	{
		//checks if any frequency is equal to max frequency then print corresponding character.
		if(alpha[i]==max)
		{
			ch=i+'a';
			cout<<ch<<" ";
		}
	}
	
	*/
	
	//ALTERNATIVE WAY
	
	
	
	//array for string input
	char st[30]={0},
	//variable to print the max occurred character(s)
	ch={0};
	//array to store frequency of alphabets
	int alpha[30]={0},
	//variable to store max frequency
	max=0;
	cout<<"Enter a word or sentence:";
	cin.getline(st,30);
	//loop to check all values of string
	for(int i=0;st[i]!='\0';i++)
	{
		//condition to convert to lower case for convinience.(as case sensitive is not mentioned in the problem).
		if(st[i]>='A' && st[i]<='Z')
		{
			st[i]=st[i]+32;
		}
		//conditions to check each character and store its frequency in coresponding array location. (0 to 25 -- a to z)
		for(int j=i+1;st[j]!=0;j++)
		{
			if(st[i]==st[j])
			{
				alpha[i]++;
			}
		}
	}
	//loop to calculate max frequency
	for(int j=0;st[j]!=0;j++)
	{
		if(max<alpha[j])
	    {
	   		max=alpha[j];
    	}
	}
	cout<<"\nHighest character(s):";
	//loop to print highest occurred character(s).
	for(int i=0;st[i]!=0;i++)
	{
		//checks if any frequency is equal to max frequency then print corresponding character.
		if(alpha[i]==max)
		{
			cout<<st[i]<<" ";
		}
	}
	
	
	
	
}    	

	

