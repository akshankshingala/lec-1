/*
1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
*/


#include<iostream>

using namespace std;

class Students{
	
	
	public:
	
	 int  stu_id;
	 char stu_name[100];
	 int  stu_age;
	 char stu_course[100];
	 char stu_email[100];
	 char stu_city[100];
	 char stu_college[100];
	
	public:
		
		void setData(){
			
		cout<<"enter ID :-"<<endl;
		cin>>stu_id;			
			cout<<"enter name :-"<<endl;
		cin>>stu_name;		
			cout<<"enter age :-"<<endl;
		cin>>stu_age;		
			cout<<"enter course :-"<<endl;
		cin>>stu_course;		
			cout<<"enter email :-"<<endl;
		cin>>stu_email;		
			cout<<"enter city :-"<<endl;
		cin>>stu_city;		
			cout<<"enter college :-"<<endl;
		cin>>stu_college;			

		}
		
		
		void getData(){
			
			
			
			cout<<stu_id<<endl
			<<stu_name<<endl
			<<stu_age<<endl
			<<stu_course<<endl
			<<stu_email<<endl
			<<stu_city<<endl
			<<stu_college<<endl;
			
		}
		
		
		
		
		
		
};

	int main(){
			
			Students s,s1,s2,s3,s4;
			
			s.setData();
			s.getData();
			s1.setData();
			s1.getData();
			s2.setData();
			s2.getData();
			s3.setData();
			s3.getData();
			s4.setData();
			s4.getData();



}
















