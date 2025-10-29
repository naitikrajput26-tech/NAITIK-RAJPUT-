
#include <stdio.h>

int main()
{
    int=i;
    
    for(i=1,i<=10,i++)
    {
        cout<<i<<endl;
    }
}


#include <iostream>
using namespace std;

int main() 
{
    int sum=0;
    int i;
    
    for(i=1;i<=10;i++)
    {
      sum=sum+i;
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<sum;
}

#include <iostream>
using namespace std;

int main()
{
int i, fact=1,n;
    cout<<"enter value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    cout<<i<<endl;
        
    }
    cout<<endl;
    cout<<fact;
    
}

#include <iostream>
using namespace std;

int main()
{
int i,u,n,a=0,b=1;
    cout<<"enter value"<<endl;
    cin>>n;
    cout<<a<<","<<b<<",";
    for(i=2;i<=n;i++)
    {
        u=a+b;
        cout<<u<<",";
        a=b;
        b=u;
        
    }

    
    
}

#include <iostream>
using namespace std;

int main()
{
int i;
i=1;
while(i<=10)

{
    cout<<i<<endl;
    i++;
}
    
    
}

#include <iostream>
using namespace std;

int main()
{
int i;
i=1;

while(i<=50)

{
    if(i%2!=0)
    cout<<i<<endl;
    i++;
}
    
    
}

#include <iostream>
using namespace std;

int main()
{
int i, n;
i=1;
cout<<"enter the value";
cin>>n;




while(i<=n)

{
    if(n%i==0)
    cout<<i<<endl;
    i++;
}
    
    
}

#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f;
    
    
    cin>>a;
    
    
    
    b=0.25*a;
    c=0.15*a;
    d=a+b+c;
    e=0.10*d;
    f=d-e;
     cout<<"Net salary="<<f<<endl;
       
    return 0;
}
