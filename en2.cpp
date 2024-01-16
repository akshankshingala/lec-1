/*
2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)
*/


#include<iostream>

using namespace std;

class Customers{
	
	
	private:
	
	 int  cust_id;
	 char cust_name[100];
	 int  cust_age;
	 char cust_telecome_brand_name[100];
	 int cust_mobile_number;
	 char cust_city[100];
	 int cust_simcard_validity;
	
	public:
		
		void setData(){
			
		cout<<"enter cust_id :-"<<endl;
		cin>>cust_id;			
			cout<<"enter cust_name :-"<<endl;
		cin>>cust_name;		
			cout<<"enter cust_age :-"<<endl;
		cin>>cust_age;		
			cout<<"enter cust_telecome_brand_name :-"<<endl;
		cin>>cust_telecome_brand_name;		
			cout<<"enter cust_mobile_number :-"<<endl;
		cin>>cust_mobile_number;		
			cout<<"enter cust_city :-"<<endl;
		cin>>cust_city;		
			cout<<"enter cust_simcard_validity :-"<<endl;
		cin>>cust_simcard_validity;			

		}
		
		
		void getData(){
			
			
			
			cout<<cust_id<<endl
			<<cust_name<<endl
			<<cust_age<<endl
			<<cust_telecome_brand_name<<endl
			<<cust_mobile_number<<endl
			<<cust_city<<endl
			<<cust_simcard_validity<<endl;
			
		}
		
		
		
		
		
		
};

	int main(){
			
			Customers s,s1,s2,s3,s4;
			
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
















