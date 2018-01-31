#include<iostream>
#include<string>
using namespace std;

  string Vaccume_agent(string location,string status)
{
    if(status=="Dirty")
    {
        return "suck";

    }
    else if(location=="A")
    {
        return "right";
    }

    else if (location=="B")
    {
        return "left";

    }
    else{
        return"invalid";
    }
}
 int main()
 {
   int n,i;

     string location,status;
     cout<<"enter how many times u want to see:"<<endl;
     cin>>n;
     for(i=1;i<=n;i++)
     {
         cin>>location>>status;
          cout<<Vaccume_agent(location,status)<<endl;

     }




 }




