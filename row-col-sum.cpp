#include<iostream>
using namespace std;
int main()
{
    int size,row_sum=0,i,j,col_sum=0,choice,index;
    cout<<"Enter array Size :"<<endl;
    cin>>size;
    int a[size][size];
    cout<<"Enter Array Element :"<<endl;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
        }
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    do{
        cout<<"Press 1 for Row wise sum :"<<endl;
        cout<<"Press 2 for Column wise sum :"<<endl;
        cout<<"Press 0 for Row wise sum :"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int row_index;
                cout<<"Enter row index :";
                cin>>row_index;
                for(i=0; i<size; i++)
                {
                    for(j=0; j<size; j++)
                    {
                        if(j==row_index)
                        {
                            row_sum=row_sum+a[i][j];
                        }
                    }
                }
                cout<<"row wise sum :"<<row_sum<<endl;
                break;
            case 2:
                int col_index;
                cout<<"Enter column index :";
                cin>>col_index;
                for(i=0; i<size; i++)
                {
                    for(j=0; j<size; j++)
                    {
                        if(j==col_index)
                        {
                            col_sum=col_sum+a[i][j];
                        }
                    }
                }
                cout<<"Column wise sum :"<<col_sum<<endl;
                break;
            case 0:
                break;

            default:
                cout<<"Enter valid Choice ";
        }
    }while(choice != 0);
    return 0;
}