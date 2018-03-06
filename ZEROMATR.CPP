#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int m,n,i,j;
	cin>>m>>n;
	cout<<"enter array"<<endl;
	int a[3][3];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	/*Algorithm to find zero element and replace all elements of row & column associated with it to 0*/
	int r[3],c[3],ctr=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			if(a[i][j]==0)
			{

				r[ctr]=i;
				c[ctr]=j;
				ctr++;
				break;
			}
		}
	}

	for(i=0;i<m;i++)
	{
		if(r[i]==i)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		for(j=0;j<n;j++)
		{
			if(c[j]==j)
			{
				a[i][j]=0;
			}
		}
	}
	cout<<"Zero matrix obtained is \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
	cout<<endl;
	}
getch();
}