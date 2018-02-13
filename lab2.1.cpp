#include<iostream>
#include<string>
using namespace std;

  string Vaccume_agent(const string& location,const string& status)
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
   int n;

     string location,status;
     std::cout<<"enter how many times u want to see:"<<std::endl;
     std::cin>>n;
     for(auto i =1;i<=n;i++)
     {
         std::cin>>location>>status;
         std::cout<<Vaccume_agent(location,status)<<std::endl;

     }




 }




