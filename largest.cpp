#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter row size :"<<endl;
	cin>>r;
	cout<<"Enter column size :"<<endl;
	cin>>c;
	int a[r][c],i,j,max=1;
	cout<<"Enter array element :"<<endl;
	i=0;
	while(i<r)
	{
		int j=0;
		while(j<c)
		{
			cout<<"a["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
			j++;
		}
		i++;
	}
	i=0;
    while (i < r)
	{
        int j = 0;
        while (j < c)
		{
            if (a[i][j] > max)
			{
                max = a[i][j];
            }
            j++;
        }
        i++;
    }
	cout<<"Largest number in 2d array :"<<max<<endl;

	return 0;
}
