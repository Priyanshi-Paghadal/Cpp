#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter array size :"<<endl;
    cin>>size;
    int a[size],i,choice,pos,elem;
    for(i=0; i<size; i++)
    {
        cout<<"a["<<i<<"] :";
        cin>>a[i];
    }
    do{
        cout<<"Press 1 for Insert operation"<<endl;
        cout<<"Press 2 for Delete operation"<<endl;
        cout<<"Press 3 for View operation"<<endl;
        cout<<"Press 4 for Update operation"<<endl;
        cout<<"Press 0 for Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                    cout<<"Enter Position :"<<endl;
                    cin>>pos;
                    cout<<"Enter Element :"<<endl;
                    cin>>elem;
                    for(i=size-1; i>=pos; i--)
                    {
                        a[i+1]=a[i];
                    }
                    size++;
                    a[pos]=elem;
                    cout<<"data Inserted Successfully"<<endl;
                    break;
            case 2:
                    cout<<"Enter Position :"<<endl;
                    cin>>pos;
                    cout<<"Enter elem :"<<endl;
                    cin>>elem;
                    for(i=pos-1; i<size; i++)
                    {
                        a[i-1]=a[i];
                    }
                    size--;
                    cout<<"Data deleted successfully"<<endl;
                    break;
            case 3:
                    cout<<"View your array :"<<endl;
                    for(i=0; i<size; i++)
                    {
                        cout<<a[i]<<endl;
                    }
                    break;
            case 4:
                    cout<<"Enter Position"<<endl;
                    cin>>pos;
                    cout<<"Enter element"<<endl;
                    cin>>elem;
                    a[pos]=elem;
                    cout<<"Data update successfully"<<endl;
                    break;
            case 0:
                    break;
            default:
                    cout<<"Invalid Choice"<<endl;
                    break;
        }
    }while(choice != 0);
    return 0;
}