#include<iostream>
using namespace std;
class Contact{
	private: string name;
	string phoneNumber;
	string email;
	public:
		void setName(string n){
			name=n;
		}
		void setPhoneNumebr(string p){
			phoneNumber=p;
			
		}
		void setEmail(string e){
			email=e;
		}
		string getName(){
			return name;
		}
		string getPhoneNumebr(){
			return phoneNumber;
		}
		string getEmail(){
			return email;
		}
		
};
int main(){
	Contact c;
	c.setName("Ram Bahadur");
	c.setPhoneNumebr("98234233");
	c.setEmail("ram@gmail.com");
	cout<<"Contact Inforamtion!! "<<endl;
	cout<<"Name= "<<c.getName();
	cout<<"Phoen Number= "<<c.getPhoneNumebr();
}
