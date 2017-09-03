#include<iostream>
#include <string>
using namespace std;

class person
{    
	public:
		string name;
	int age;
	person();
	~person();
	
};

class professor : public person
{
	int publication;
	int cur_id;
public:
	professor();
	~professor();

// this is for the getting the information of the student.
	void getdata(string nam,int ag,int pub,int cur=1);
    void putdata();
	
};

class student : public person
{
	int marks[6];
	int cur_id;
public:
	student();
	~student();
	void getdata(string nam,int ag,int *mark,int cur=2);
    void putdata();
	
};

void professor::getdata(string nam,int ag,int pub,int cur=1){
	name=nam;
	age=ag;
	publication=pub;
	cur_id=cur;
}

void student::getdata(string nam,int ag,int *mark,int cur=2)
{
	name=nam;
	age=ag;
	for(int i=0;i<6;i++)
	{
	    marks[i]=mark[i];
	}
	cur_id=cur;
}

void professor::pudata()
{
	cout<<name<<" "<<age<<" "<<publication<<" "<<cur_id<<endl;
}
 
 void student::putdata(){

 	int sum=0;
 	for(int i=0;i<6;i++)
 	{
 		sum=sum+marks[i];
 	}
 	cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
 }

int main(int argc, char const *argv[])
{

	
	
	return 0;
}