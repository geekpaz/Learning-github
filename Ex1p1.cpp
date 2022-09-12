#include <iostream>

using namespace std;

int main()
{
    cout<<"PRAJJWAL MAURYA\n 21BCS10777"<<endl;
    

    int sub,marks,sum=0,n,i=1;
    cout<<"Enter the number of subjects: ";
    cin>>sub;
    n=sub;
    while(sub){
        cout<<"Enter the marks of subject "<<i<<" :";
        cin>>marks;
        sum+=marks;
        sub--;
        i++;
    }

   
    cout<<"Total marks= "<<sum;
    float avg=float(sum)/n;
    cout<<"\nAverage is : "<<avg;

    return 0;
}
