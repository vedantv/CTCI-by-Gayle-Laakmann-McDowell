#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int m,n,i,j;
	cin>>m>>n;
	cout<<"enter array"<<endl;
	int** a=new int*[m];
	for(i=0;i<m;i++)
		a[i]=new int[n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	/*Algorithm to find zero element and replace all elements of row & column associated with it to 0*/
	int* tr = new int[m];
	int* tc = new int[n];
	for(i=0;i<n;i++)
	{
		tc[i]=0;
	}
	for(i=0;i<m;i++)
	{
		tr[i]=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			if(a[i][j]==0)
			{
				if(tr[i]==0)
				{tr[i]=1;}
				if(tc[j]==0)
				{tc[j]=1;}

			}
		}
	}

	for(i=0;i<m;i++)
	{
		if(tr[i]!=0)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		else
		{
			for(j=0;j<n;j++)
			{
				if(tc[j]!=0)
				{
					a[i][j]=0;
				}
			}
		}


	}
	cout<<"Zero matrix obtained is \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	cout<<endl;
	}
getch();
}