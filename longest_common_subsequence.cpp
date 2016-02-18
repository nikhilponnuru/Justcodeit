#include<iostream>
#include<algorithm>
using namespace std;
int i,j;
int l[10][10];
void l_c_s(string s1,string s2,int len1,int len2)
{
    for(i=0;i<=len1;i++)
    {

        for(j=0;j<=len2;j++)
            {


                 if(i==0 || j==0)  //i.e for every i=0 and all j=0 columns
                   l[i][j]=0;

                 else if(s1[i-1]==s2[j-1])
                    {
                       l[i][j]=l[i-1][j-1]+1;
                       cout<<s1[i-1]<<endl;
                    }

                  else{
                      l[i][j]=max(l[i-1][j],l[i][j-1]);

                  }
            }


    }
    cout<<l[i-1][j-1];


}
int main()
{
   string s1,s2;
   cout<<"enter strings"<<endl;
   cin>>s1>>s2;

   int len1=s1.size(); //let us take this as row

   int len2=s2.size(); //let us take this as column
   l_c_s(s1,s2,len1,len2);

  return 0;
}
