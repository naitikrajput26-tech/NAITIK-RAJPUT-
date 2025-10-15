#include <iostream>
using namespace std;
int main() {
    int age;
    cin>>age;
    cout<<((age>=18)?"user is eligible":"not eligible");

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    
    int balance=5000; //intial balance
    int withdraw;
    
    cout<<"Enter withdrawl amount: ";

    cin>>withdraw;
    
    //using conditional operator to check withdrawl
    (withdraw <= balance)
    ? cout<<"Transition is successful!\nRemaining balance:"<<(balance - withdraw)<<endl
    : cout<<"Insufficient balance!\nAvailable balance:"<<balance<<endl;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float avg=(a+b+c+d+e)/5;
    float per=((a+b+c+d+e)*100)/500;
    
    cout<<"average is"<<avg<<endl;
    cout<<"percentage is "<<per<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"before swapping value of a"<<a<<"value of b"<<b<<endl;
    
    a=a+b;
    b=a-b;
    a=a-b;
     cout<<"after swapping value of a"<<a<<"value of b"<<b<<endl;
       
    return 0;
}

#include<iostream>
using namespace std;
int main() {
    
}