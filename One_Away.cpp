#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter string 1 \n";
	getline(cin,s1);
	cout<<"enter strign 2 \n";
	getline(cin,s2);
	int ctr=0,i,j,label[20];
	for(i=0;i<s2.length();i++)
	{
		label[i]=0;
	}
	if(s1.length()==s2.length())
    {
    	for(i=0;i<s1.length();i++)
    	{
    		for(j=0;j<s2.length();j++)
    		{
    			if(s1[i]==s2[j] && label[j]==0)
    			{
    				ctr++;
    				label[j]+=1;
    			}
    		}
    	}
    }
    if(ctr==s2.length())
    	cout<<"given strings are palindrome of each other already";
    else if(s1.length()==s2.length()+1)
    {

    }
    else if(s1.length()==s2.length()-1)
    {

    }

	s1.length();
	return 0;
}
