#include<iostream>
using namespace std;
class studentinfo{
    public:
    int no;
    string name;
    bool gender;
};
int main()
{
//	const int size=3;
    studentinfo s1[3];

	    for (int i = 0; i < 3; i++) {
        	cout << "Enter details for student " << i + 1 << ":" << endl;
        	cin>>s1[i].no;
			cin>>s1[i].name;
        	cin>>s1[i].gender;
    	}
	
	for(int i=0; i< 3; i++)
	{
		cout << "Student " << i + 1 << ":" << endl;
		cout<<s1[i].no<<endl;
		cout<<s1[i].name<<endl;
		cout<<s1[i].gender<<endl;	
	}

}
//#include<iostream>
//using namespace std;
//
//class studentinfo {
//public:
//    int no;
//    string name;
//    bool gender;
//};
//
//int main() {
//    const int size = 3; // Set the size of the array
//
//    studentinfo s1[size]; // Declare an array of studentinfo objects
//
//    for (int i = 0; i < size; i++) {
//        cout << "Enter details for student " << i + 1 << ":" << endl;
//        cin >> s1[i].no;
////        cin.ignore(); // Ignore the newline character left in the buffer
//        getline(cin, s1[i].name);
//        cin >> s1[i].gender;
//    }
//
//    cout << "Details of students:" << endl;
//
//    for (int i = 0; i < size; i++) {
//        cout << "Student " << i + 1 << ":" << endl;
//        cout << "No: " << s1[i].no << endl;
//        cout << "Name: " << s1[i].name << endl;
//        cout << "Gender: " << s1[i].gender << endl;
//    }
//
//    return 0;
//}

