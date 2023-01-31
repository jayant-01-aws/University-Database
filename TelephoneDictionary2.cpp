#include <iostream>
using namespace std;

class Student
{
    public:
    //already private
    // string first_name;
    // string last_name;
    string Name;
    string ID;
    string Address;
    string Phone_Number;
    float CGPA;

    public:
        Student()
        {
            Name=" ";
            ID=" ";
            Address=" ";
            Phone_Number=" ";
            CGPA=0.0;
        }

        void student_data_input()
        {
            cout<<"Enter ID: "<<endl;
            cin>>ID;
            cout<<"Enter name: "<<endl;
            cin>>Name;
            cout<<"Enter Address: "<<endl;
            cin>>Address;
            cout<<"Enter Phone Number: "<<endl;
            cin>>Phone_Number;
            cout<<"Enter CGPA: "<<endl;
            cin>>CGPA;
        }
        void student_data_display()
        {
            cout<<"ID: "<<ID<<endl;
            cout<<"Name: "<<Name<<endl;
            cout<<"Address: "<<Address<<endl;
            cout<<"Phone Number: "<<Phone_Number<<endl;
            cout<<"CGPA: "<<CGPA<<endl;
        }
        void student_data_delete()
        {
            Name=" ";
            ID=" ";
            Address=" ";
            Phone_Number=" ";
            CGPA=0.0;
        }
        // void student_data_search(string s_n, int a, Student obj_1[] )
        // {
        //     cout<<"YES";
            
        //     for(int i=0 ; i<=2 ; i++)
        //     {
        //         if(s_n==obj_1[i].ID)
        //         cout<<"Found it";
        //     }
        //     cout<<"Hey;";
        // }
        
        
};

// void Student::student_data_search(string s_n, int a, Student obj_1[] )
// {
//     cout<<"abd";
// }




int main()
{
    cout << "*********" << endl;
    cout << "\n    Telephone Directory\n" << endl;
    cout << "*********" << endl;

    cout<<"Please enter how many Student's record you want to save: "<<endl;
    int records;
    cin>>records;
    Student Telephone_directory[records];
    int counts, i;
    int option;
    while(1)
    {
        cout<<"******************"<<endl;
        cout<<"\n             Telephone Directory: Main Menu\n"<<endl;
        cout<<"******************"<<endl;
        cout<<"1. Insert a New Student"<<endl;
        cout<<"2. Update and existing Student"<<endl;
        cout<<"3. Delete a record"<<endl;
        cout<<"4. Search for a student (using name or ID)"<<endl;
        cout<<"5. List directory"<<endl;
        cout<<"[Select option from 1 to 5]"<<endl;
        
        cin>>option;
        
        switch (option)
        {
            case 1:
                cout<<"******************"<<endl;
                cout<<"             Telephone Directory: Insert Menu"<<endl;
                cout<<"******************"<<endl;
                for (i=0 ; i<=records-1 ; i++)
                {
                    Telephone_directory[i].student_data_input();
                }
                
                break;
            case 2:
                cout<<"******************"<<endl;
                cout<<"             Telephone Directory: Update Menu"<<endl;
                cout<<"******************"<<endl;
                break;
            case 3:
                cout<<"******************"<<endl;
                cout<<"             Telephone Directory: Delete Menu"<<endl;
                cout<<"******************"<<endl;
                break;
            case 4:
                cout<<"******************"<<endl;
                cout<<"             Telephone Directory: Search Menu"<<endl;
                cout<<"******************"<<endl;
                break;
            case 5:
                cout<<"******************"<<endl;
                cout<<"             Telephone Directory: Directory Members"<<endl;
                cout<<"******************"<<endl;
                break;
            default:
                cout<<"Invalid option"<<endl;
            
            
            
            return 0;
        }
    }
}