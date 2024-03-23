#include<iostream>
using namespace std;
class myClass{
    private:
        int size;
        int *arr;

    public:
        myClass(int size)
        {
            this->size=size;
            arr= new int[this->size];

            if(arr == NULL)
            {
                cout<<"Memory Allocation Failed."<<endl;
            }
            else{
                cout<<"Memory Allocation Successfull."<<endl;
            }
        }
        ~myClass()
        {
            delete[] arr;
            arr= NULL;

            if(arr == NULL)
            {
                cout<<"Memory Deallocation successfull."<<endl;
            }
            else{
                cout<<"Memory Deallocation Failed."<<endl;
            }
        }
    void addElement(int index , int element)
    {
        if(index>=0 && index<size)
        {
            this->arr[index]=element;
            cout<<"Element added successfully."<<endl;
        }
        else{
            cout<<"array index is out of bounds !"<<endl;
        }
    }
    void getElement(int index)
    {
        if(index>= 0 && index<this->size)
        {
            cout<<"array element index :"<<index<<" "<<"Element is :"<<this->arr[index]<<endl;
        }
    }
};
int main()
{
    myClass *obj;
    obj = new myClass(7);
    if(obj== NULL)
    {
        cout<<"Object is allocate failed."<<endl;
        return 1;
    }
    else{
        cout<<"Object is allocate successfully."<<endl;
    }
    obj->addElement(2 , 78);
    obj->getElement(2);
    delete obj;
    obj = NULL;
    if(obj== NULL)
    {
        cout<<"Object is deallocate successfully."<<endl;
    }
    else{
        cout<<"Object is deallocate failed."<<endl;
        return 1;
    }
    return 0;
}