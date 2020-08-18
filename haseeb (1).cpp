#include<iostream>
# include<fstream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
using namespace std;
static int y=1;
class file
{
private:
	int roll;
	float timing;
	char name[100];
	char tr[100];
	char doc[100];
	char rep[100];
public:
	void input();
	void show();
	void active();
	void update();
	void search();
    void Delete();
	char *getn()
	{
		return name;
	}
};file fileobj;
 
void file::input()
{
	ofstream file1;
	file1.open("TEACHER",ios::app);
 	cout<<"Enter the id no"<<endl;
	cin>>roll;
	file1<<roll<<'\t';
	cout<<"Enter credit hours of the TEACHER"<<endl;
	cin>>doc;
	file1<<doc<<'\t';
	cout<<"Enter the timing of TEACHER"<<endl;
	cin>>timing;
	file1<<timing<<'\t';
    cout<<"Enter the name of TEACHER"<<endl;
	cin>>name;
	file1<<name<<'\t';	
	cout<<"Enter course name"<<endl;
	cin>>tr;
	file1<<tr<<'\t';
	cout<<"Enter section of the TEACHER"<<endl;
	cin>>rep;
	file1<<rep<<'\n';	
file1.close();
}
void file::show()
{
ifstream file2;
file2.open("TEACHER",ios::in);
	file2>>roll>>doc>>timing>>name>>tr>>rep;
	while(!file2.eof()){
	cout<<"Token no==> "<<roll<<endl;
	cout<<"credit hours==>"<<doc<<endl;
	cout<<"Name==> "<<name<<endl;
	cout<<"course name==>"<<tr<<endl;
	cout<<"timing ==> "<<timing<<endl;
	cout<<"section==>"<<rep<<endl;
	file2>>roll>>doc>>timing>>name>>tr>>rep;
}
}

void file::active()
{
ifstream file3;
file3.open("TEACHER",ios::in);
	file3>>roll>>doc>>timing>>name>>tr>>rep;
	while(!file3.eof()){
	cout<<"Token no==> "<<roll<<endl;
	cout<<"credit hours==>"<<doc<<endl;
	cout<<"Name==> "<<name<<endl;
	cout<<"course name==>"<<tr<<endl;
	cout<<"timing ==> "<<timing<<endl;
	cout<<"section==>"<<rep<<endl;
	file3>>roll>>doc>>timing>>name>>tr>>rep;
}
}

void file::search()
{
	int id,f=0;
cout<<"enter id you want to search"<<endl;
cin>>id;
ifstream file4;
file4.open("TEACHER",ios::in);
	file4>>roll>>doc>>timing>>name>>tr>>rep;
	while(!file4.eof()){
	if(id==roll){
	cout<<"Token no==> "<<roll<<endl;
	cout<<"credit hours==>"<<doc<<endl;
	cout<<"Name==> "<<name<<endl;
	cout<<"course name==>"<<tr<<endl;
	cout<<"timing ==> "<<timing<<endl;
	cout<<"section==>"<<rep<<endl;f=1;
break;
}
else{
	
	file4>>roll>>doc>>timing>>name>>tr>>rep;
}
}
if(f==0){
	cout<<"NO RECORD"<<endl;
}
}

void file::update()
{
	int id,f=0;
cout<<"enter id you want to update"<<endl;
cin>>id;
ifstream file5;
file5.open("TEACHER",ios::in);
	file5>>roll>>doc>>timing>>name>>tr>>rep;
	while(!file5.eof()){
	if(id==roll){
	cout<<"Token no==> "<<roll<<endl;
	cout<<"credit hours==>"<<doc<<endl;
	cout<<"Name==> "<<name<<endl;
	cout<<"course name==>"<<tr<<endl;
	cout<<"timing ==> "<<timing<<endl;
	cout<<"section==>"<<rep<<endl;
f=1;
break;
}
else{
	
	file5>>roll>>doc>>timing>>name>>tr>>rep;
}
}
if(f==0){
	cout<<"NO RECORD"<<endl;
}
}

void file::Delete()
{
	int id,f=0;
cout<<"enter id you want to delete"<<endl;
cin>>id;
ofstream file7;
file7.open("new",ios::app);
ifstream file6;
file6.open("TEACHER",ios::in);
	file6>>roll>>doc>>timing>>name>>tr>>rep;
	while(!file6.eof()){
	if(id!=roll){
	file7<<roll<<doc<<timing<<name<<tr<<rep;

}
else{
	cout<<"RECORD DELTED"<<endl;
	}
}
		remove("TEACHER");

		rename("new", "TEACHER");

}



int main()
{
	file s;
	int opt;
	while(1)
	{
		system("cls");
		cout<<"1.Add New Teacher Record in Data File"<<endl;
		cout<<"2.Display Teacher Record From Data File"<<endl;
		cout<<"3.Display Teacher active Record From Data File"<<endl;
		cout<<"4.Update  Teacher Record From Data File"<<endl;
		cout<<"5.search  Teacher Record From Data File"<<endl;
	    cout<<"6.Delete  Teacher Record From Data File"<<endl;
		cout<<"7.Exit From the Program"<<endl;
		cout<<"Enter your Option : "<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
			{
			s.input();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
			case 2:
			{
				s.show();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
			case 3:
			{
				s.active();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
					case 4:
			{
				s.update();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
						case 5:
			{
				s.search();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
			case 6:
			{
				s.Delete();
				system("pause");
				cout<<"Display Main Menu(press enter)"<<endl;
				getch();
				break;
			}
			case 7:
			{
				exit(0);
			}
			default:
			{
				cout<<"Wrong Choice....Press Key For View the Main Menu";
				getch();
		system("cls");
			}
		}
	}
}
 

