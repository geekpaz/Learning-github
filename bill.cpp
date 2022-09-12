#include <iostream>
using namespace std;

class charges{
    public:
    char name[50];
    int units;
    float bill;

  void get_data(){
      cout<<"Enter the name: "<<endl;
      cin>>name;
      cout<<"Enter units: "<<endl;
      cin>>units;
      }

  void display_data();

};



void charges::display_data(){
    if(units>300){
        bill=((units-300)*60+200*50+100*40)/100;
        if(bill>250){
            cout<<"The chrges: "<<bill+(bill*15)/100;
    }
    else{
        cout<<"The chrges: "<<bill;
    }
    }
    
    else if(units>100 && units<=300){
        bill=((units-100)*50+100*40)/100;
        if(bill>250){
            cout<<"The chrges: "<<bill+(bill*15)/100;
    }

    else{
        cout<<"The chrges: "<<bill;
        }
  }
  
  else{
      bill=units*40;
      if(bill>250){
        cout<<"The chrges: "<<bill+(bill*15)/100;
    }

    else{
    cout<<"The chrges: "<<bill;

  }
}
}

int main(){
    charges custmor;
    custmor.get_data();
    custmor.display_data();

    return 0;
    }