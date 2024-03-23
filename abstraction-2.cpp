#include<iostream>
using namespace std;
//interface
class authentication
{
    public :
        virtual void login_user() = 0;
        virtual void signup_user() = 0;
        virtual void logout_user() = 0;
};
//interface
class theme
{
    public :
        virtual void light_theme() = 0;
        virtual void dark_theme() = 0;
};
class myapp : public authentication , public theme
{
    public :
        void login_user()
        {
            cout<<"User login .."<<endl;
        }
        void signup_user()
        {
            cout<<"User sign up.."<<endl;
        }
        void logout_user()
        {
            cout<<"User log out.."<<endl;
        }
        void light_theme()
        {
            cout<<"You choose light theme.."<<endl;
        }
        void dark_theme()
        {
            cout<<"You choose dark theme.."<<endl;
        }
};

int main()
{
    myapp obj;
    obj.login_user();
    obj.signup_user();
    obj.logout_user();
    obj.light_theme();
    obj.dark_theme();
    return 0;
}