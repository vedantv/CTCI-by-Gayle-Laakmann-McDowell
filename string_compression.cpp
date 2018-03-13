#include <iostream.h>
#include <conio.h>
#include<string.h>
int main()
{
	clrscr();
	char* str;
	char* comp_str;
	str = new char[7];
	comp_str = new char[6];
	int i,ctr=1,j=0;
	cout<<"enter the string \n";
	cin>>str;
	i=1;
	cout<<endl;
	while(str[i]!='\0')
	{
		if(str[i]==str[i-1])
		{
			ctr++;
		}
		else
		{
			comp_str[j]=str[i-1];
			comp_str[j+1]=ctr+48;
			j+=2;
			ctr=1;
		}
		i++;
	}
	comp_str[j]=str[i-1];
	comp_str[j+1]=ctr+48;
	cout<<"the compressed string is \n";
	if(j+1<i-1)
		cout<<comp_str;
	else
		cout<<str;

	getch();
	return 0;
}