#include<iostream>
using namespace std;


int main(){

char name[25];

float units,tc;

cout<<"Electricity Board Charges\n";

cout<<"\nPlease enter user name : ";

cin>>name;

cout<<"\n\nPlease enter number of units consumed:-";

cin>>units;





if(units<=100){
    tc=units*0.40;
     cout<<tc;
}
else if(units<=300){
    tc=units*0.50;
    cout<<tc;
}

else if(units>300){
     tc=units*0.60;
}
    else if(units>300 && tc<150){
        tc=150;
        cout<<tc;
    }
    else if(units>300 && tc>250){
        tc=tc+(tc*(15/100));
        cout<<tc;
    }






//total_cost = tc + 50;



cout<<"\nYour bill amount: "<<tc;
return 0;
}