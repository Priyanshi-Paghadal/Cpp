#include<iostream>
using namespace std;
template<typename T>
class Collection
{
    private :
        int size;
        T *arr;

    public:
        void createCollection(int size)
        {
            this->size= size;
            arr = new T[size];
            if(arr != NULL)
            {
                cout<<"array is created successfully.."<<endl;
            }
            else{
                cout<<"Array creation failed.."<<endl;
            }
        }
        void addItem(int index , T element)
        {
            if(index>=0 && index<this->size)
            {
                arr[index]=element;
                cout<<"Element added successfully.."<<endl;
            }
            else{
                cout<<"Array can't add.."<<endl;
            }
        }
        void displayCollection()
        {
            cout<<"Collection is :"<<endl;
            for(int i=0; i <size; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};
int main()
{
    Collection<int> obj;
    obj.createCollection(5);
    obj.addItem(1 , 8);
    obj.displayCollection();
    return 0;
}