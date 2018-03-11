#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	char str[6],comp_str[6];
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
			cout<<comp_str<<endl;
			j+=2;
			ctr=1;
		}
		i++;
	}
	comp_str[j]=str[i-1];
	comp_str[j+1]=ctr+48;
	cout<<"the compressed string is \n";
	cout<<comp_str;
	getch();
	return 0;
}