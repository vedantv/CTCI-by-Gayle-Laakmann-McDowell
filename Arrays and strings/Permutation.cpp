#include <iostream>
#include <string>
using namespace std;
int main()
{

	string s1,s2;
	cout<<"enter two strings"<<endl;
	getline(cin,s1);
	getline(cin,s2);
	int l1,l2,*a;
	l1=s1.length();
	l2=s2.length();
	if(l1!=l2)
	{
		cout<<"not permutation";
		return 0;
	}
	else
	{
		int max=0;
		for(int i=0;i<l1;i++)
        {
            if(max<(s1[i]-95))
               {
                   max = s1[i]-95;
               }
        }

		a = new int[max];
		for(int i=0;i<max;i++)
		{
			a[i]=0;
		}

		for(int i=0;i<max;i++)
		{
			a[s1[i]-95]++;
		}
		for(int i=0;i<max;i++)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;

}
