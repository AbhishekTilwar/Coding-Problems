#include<bits/stdc++.h>

using namespace std;

// Encapsulation Implementation
class student{
	private:
	string studentName;
	int studentRollno;
	int studentAge;

	public:
	void show(){
	cout<<"This is a public function";
	}
    //setter & getter to access private Data Members
	void setRollno(int studentRollno){
		this->studentRollno = studentRollno;
	}
	int getRollno(){
	 	return studentRollno;
	}
};

int main(){

	int rollno;
	cin>>rollno;
	student obj;
	obj.setRollno(rollno);
	cout<<obj.getRollno();
	return 0;
}
