#include<iostream>
using namespace std;
class Stack
{
    private:
        int *arr;
        int capacity;
        int top;
        int count;
    public:
        Stack(int capacity)
        {
            this->capacity = capacity;
            arr= new int(capacity);
            this->top=-1;
            this->count=0;
        }
        ~Stack()
        {
            delete[] arr;
        }
        void push(int element)
        {
            if(this->top==this->capacity-1)
            {
                cout<<"stack is overflow.."<<endl;
            }
            else
            {
                this->top++;
                arr[top]=element;
                this->count++;
                cout<<"Element pushed successfully.."<<endl;
            }
        }
        void pop()
        {
            if(this->top==-1)
            {
                cout<<"stack is underflow.."<<endl;
            }
            else
            {
                this->top--;
                cout<<"Element is popped.."<<endl;
                this->count--;
            }
        }
        void peek()
        {
            if(this->top==-1)
            {
                cout<<"stack is empty.."<<endl;
            }
            else
            {
                cout<<arr[this->top]<<endl;
            }
        }
        void display()
        {
            if(this->top==-1)
            {
                cout<<"stack is empty.."<<endl;
            }
            else
            {
                for(int i=this->top; i>=0; i--)
                {
                    cout<<this->arr[i]<<" ";
                }
                cout<<endl;
            }
        }
        void isempty()
        {
            if(this->top == -1)
            {
                cout<<"stack is empty.."<<endl;
            }
            else{
                cout<<"stack is not empty.."<<endl;
            }
        }
        void isfull()
        {
            if(this->top==capacity-1)
            {
                cout<<"stack is full.."<<endl;
            }
            else{
                cout<<"stack is not full.."<<endl;
            }
        }
        void size()
        {
            cout<<"size of the stack is "<<this->count<<endl;
        }
};
int main()
{
    Stack stack(5);
    int choice,element;
    do{
        cout<<"Press 1 for push Operation.."<<endl;
        cout<<"Press 2 for pop Operation.."<<endl;
        cout<<"Press 3 for peek Operation.."<<endl;
        cout<<"Press 4 for display Operation.."<<endl;
        cout<<"Press 5 for isempty Operation.."<<endl;
        cout<<"Press 6 for isfull Operation.."<<endl;
        cout<<"Press 7 for size Operation.."<<endl;
        cout<<"Press 0 for exit.."<<endl;
        cout<<"Enter your Choice.."<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter element.."<<endl;
                cin>>element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                stack.display();
                break;
            case 5:
                stack.isempty();
                break;
            case 6:
                stack.isfull();
                break;
            case 7:
                stack.size();
                break;
            case 0:
                break;
            default:
                cout<<"Enter valid choice.."<<endl;
                break;
        }
    }while(choice != 0);
    return 0;
}