#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	char str[6],comp_str[6];
	int i=0,ctr=1;
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
			cout<<str[i-1];
			cout<<ctr;
			ctr=1;
		}
		i++;
	}
	cout<<str[i-1]<<ctr<<endl;
	/*cout<<"the compressed string is \n";
	cout<<comp_str; */
	getch();
	/* code */
	return 0;
}