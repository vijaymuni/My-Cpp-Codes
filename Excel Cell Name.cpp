
/*
   ID: Excel cell name for a given N
   Author: VIJAY

*/
#include <vector>
#include <map>
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define LL long long
#define mod 1000000007
#define sz size()
#define ln length()
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORE(i,a,n) for(int i=a;i<=n;i++)
#define scint(a)    scanf("%d",&a)
#define scllint(l) scanf("%lld",&l)
#define scs(s)  scanf("%s",&s)


char str[27]={0,'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


string excelCellName(int n)
{
    string ans="";

    while(n>0)
    {
        int rem=n%26;

        if(rem==0)
        {
            ans+='Z';

            n=n/26-1;
        }


        else { ans+=str[rem]; n=n/26;  }



    }


    reverse(ans.begin(),ans.end());



    return ans;

}





int main() {

    int N;

    cin>>N;

    cout<<excelCellName(N)<<endl;


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
