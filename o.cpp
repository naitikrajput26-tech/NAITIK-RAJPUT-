#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,rev;
    cout<<"enter number"<<endl;
    cin>>n;
    using namespace std;
 a=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 c=n%10;
 n=n/10;
 rev=a*1000+b*100+c*10+n*1
 cout<<"reverse number"<<rev;
 return0;

}


#include <iostream>
using namespace std;

int main()
  { int n,a,b,c,rev,m;
  cout<<"enter number ";
  cin>>n;
  m=n;
  a=n%10;
  n=n/10;
  b=n%10;
  n=n/10;
  c=n%10;
  n=n/10;
  rev=a*1000+b*100+c*10+n*1;
 cout<<"reverse number"<<rev;
 (rev==m)?cout<<"number is palindrome":cout<<"number is non palindrome";

    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main()
  { int n,a,b,c,am,m;
  cout<<"enter number";
  cin>>n;
  m=n;
  a=n%10;
  n=n/10;
  b=n%10;
  n=n/10;
  c=n%10;
  n=n/10;
  am=pow(a,4)+pow(b,4)+pow(c,4)+pow(n,4);
 
 (am==m)?cout<<"number is Armstrong":cout<<"number is non Armstrong";

    return 0;
}
