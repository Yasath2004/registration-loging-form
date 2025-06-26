#include<iostream>
#include<fstream>
using namespace std;

int main(){

  class temp{
     string username,email,password;
     fstream fil;
      public:
      void login();
      void signUP();
      void forgot();
}obj;

  char choice;
  cout<<"\n1-login";
  cout<<"\n2-sign up";
  cout<<"\n3-forgot password";
  cout<<"\n4-exit";
  cout<<"\nEnter your choice: ";
  cin>>choice;

  switch(choice){
        case'1':

    break;
        case'2':

    break;
        case'3':

    break;
        case'4':

    break;
    defualt:
      cout<<"inalid selection.....!";
    

  }


}
void temp:: signUP(){
  cout<<"\nEnter your User name : ";
  getline(cin,username);
    cout<<"\nEnter your Email Address : ";
  getline(cin,Email);
    cout<<"\nEnter your password : ";
  getline(cin,username);

  file.open("loginData.text",ios :: out| ios:: app);
  file<<userName<<"*"<<Email<<"*"<<password<<endl;
  file.close();
}
void temp :: login(){
string searchname,searchpass;
  Cout<<"----------LOGIN----------"<<endl;
  Cout<<"Enter Your User name ::"<<endl;
  getline(cin,searchname);
  Cout<<"Enter Your passwoed ::"<<endl;
  getline(cin,searchpass);

  file.open("loginData.tet",ios :: in);
  getline(file,userName,'*');
  getline(file,Email,'*');
  getline(file,password,'\n');
  while(!file.eof()){
    if(username ==searchName){
      cout<<"\n Account Login Successful.....!";
      cout<<"\n Username::"<<username<<endl;
      cout<<"\n Email ::"<<Email<<endl;
    }
  }
  getline(file,userName,'*');
  getline(file,Email,'*');
  getline(file,password,'\n');

  }
  

  


}








