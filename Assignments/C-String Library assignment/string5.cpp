/* NAME: MUHAMMAD UMER FAROOQ
ROLL NUM: BCSF15M025
*/


#include<iostream>
using namespace std;
int main()
{
	//arrays for string 1 and string 2
	char st1[30],st2[30],len1=0,len2=0;
	//input for string 1
	cout<<"Enter first string:";
	cin>>st1;
	cout<<"Enter second string:";
	cin>>st2;
	for(int i=0;st1[i]!=0;i++,len1++);
	for(int j=len1,i=0;st2[i]!=0;i++,j++)
	{
		st1[j]=st2[i];
	}
	//output
	cout<<endl<<st1;
}
