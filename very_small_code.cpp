 //print top three company names and their amount paid in a given list of company names and values
#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
   int no,i,count=0;
   float amount;
    string cname;
    map<string,int>mymap;
    map<string,int>::reverse_iterator it;  //reverse iteration


       cout<<"Enter no of company's"<<endl;
       cin>>no;
       for(i=0;i<no;i++)
       {
        cout<<"Enter company name and amount"<<endl;
        cin>>cname;
        cin>>amount;
        mymap[cname]=amount;
        }

        for(it=mymap.rbegin();it!=mymap.rend();it++)  //iterates map from end
         {
          cout<<it->first<<'\t'<<it->second<<endl;
          count++;
           if(count==3)
            break;
         }


 return 0;
}
