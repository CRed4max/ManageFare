#include<iostream>
using namespace std;

int r=0,b=0,m=0,c=0,sum=0;

void Riksha(int x){
    r+=x;
    sum+=50*x;
}

void Bus(int x){
    b+=x;
    sum+=200*x;
}

void Motorcycle(int x){
    m+=x;
    sum+=30*x;
}

void Car(int x){
    c+=x;
    sum+=100*x;
}


int main()
{
    
    while(1){
    cout<<"1. Add A Riksha\n";
    cout<<"2. Add A Bus\n";
    cout<<"3. Add A Motorcycle\n";
    cout<<"4. Add A Car\n";
    cout<<"5. Display Status\n";
    cout<<"6. Exit\n";
    cout<<"Choose an option: ";
    int n;
    cin>>n;
    if(n==6)break;
    if(n==5){
    cout<<"Number of Riksha: "<<r<<"\n";
    cout<<"Number of Motorcycle: "<<m<<"\n";
    cout<<"Number of Bus: "<<b<<"\n";
    cout<<"Number of Car: "<<c<<"\n";
    cout<<"Total Deposited Amount: "<<sum<<"\n";
    continue;
    }

    switch(n)
    {
        case 1:int x1;
               cout<<"How many Riksha are to be add: ";
               cin>>x1;
               Riksha(x1);
               system("cls");break;
        case 2:int x2;
               cout<<"How many Bus are to be add: ";
               cin>>x2;
               Bus(x2);
               system("cls");break;
        case 3:int x3;
               cout<<"How many Motorcycle are to be add: ";
               cin>>x3;
               Motorcycle(x3);
               system("cls");break;
        case 4:int x4;
               cout<<"How many Car are to be add: ";
               cin>>x4;
               Car(x4);
               system("cls");break;
    }
    }

}