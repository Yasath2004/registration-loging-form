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
