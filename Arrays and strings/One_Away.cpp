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
	if(s1.length()==s2.length())
    {
    	for(i=0,j=0;i<s1.length()&&j<s2.length();i++,j++)
    	{
    			if(s1[i]!=s2[j] && ctr<=1)
    			{
    				ctr++;    			
    			}
    			else if(ctr>1)
    			{
    				cout<<"not one away";
    				break;
    			}
    	}
    	if(i==s1.length() && ctr<=1)
    	{
    		cout<<"one away";
    	}
	}
    else if(s1.length()==s2.length()+1)
    {
    	for(i=0,j=0;i<s1.length()&&j<s2.length();i++,j++)
    	{
    			if(s1[i]!=s2[j])
    			{
    				cout<<"not one away";
    				break;   			
    			}
    	}
    }
    else if(s1.length()==s2.length()-1)
    {
    	for(i=0,j=0;i<s1.length()&&j<s2.length();i++,j++)
    	{
    			if(s1[i]!=s2[j]  && flag==0)
    			{
    				flag++;
    				continue;
    				j--;
    			}
    			else if(flag!=0)
    			{
    				cout<<"not one away";
    			}
    	}
    }

	s1.length();
	return 0;
}
