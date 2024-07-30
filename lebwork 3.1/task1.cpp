#include<iostream>
using namespace std;
class student{
	private:
	int stu_id;
	char stu_name[100];
	int stu_age;
	char stu_course[100];
	char stu_city[100];
	char stu_email[100];
	char stu_college[100];
	public:
		void setData()
		{
			cout<<"Enter student id = ";
			cin>>stu_id;
				cout<<"Enter student name = ";
			    cin>>stu_name;
				cout<<"Enter student age = ";
			cin>>stu_age;
				cout<<"Enter student course = ";
			cin>>stu_course;
				cout<<"Enter student city = ";
			cin>>stu_city;
				cout<<"Enter student email = ";
			cin>>stu_email;
				cout<<"Enter student college = ";
			cin>>stu_college;
			
		}
		void getData()
		{
			cout<<"Student Id = "<<stu_id<<endl
			    <<"Student Name = "<<stu_name<<endl
			    <<"Student Age = "<<stu_age<<endl
			    <<"Student Course = "<<stu_course<<endl
			    <<"Student City = "<<stu_city<<endl
			    <<"Student Email = "<<stu_email<<endl
			    <<"Student College = "<<stu_college<<endl;
			    
		}
	
};
int main()
{
	student s[5];
	for(int i=0;i<=5;i++)
	{
	s[i].setData();
    }
    for(int i=0;i<=5;i++)
    {
	s[i].getData();
    }
}