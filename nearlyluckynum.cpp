// Aditya verma 
#include<iostream>
#include<vector>
#define ll long long int 
#define ld long double 
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,n) for( ll i=0 ; i<n ; ++i)
#define reps(i,a,n) for( ll i=a ; i<n ; ++i)
#define vi vector < int >
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"

using namespace std;

int main()
{
    FASTIO;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n ;
    cin>>n;

    string s ; 
    cin>>s;

    vi sum ;

    for (int i=0 ; i<n ; )
    	{
    		int count = 0 ;
    		int temp = s.at(i);

    		while( s.at(i)== temp )
    			 {
    			 	count++;
    			 	i++;
    			 	if(i==n)
    			 	   break;
    			 }
    		if(count==1)
    		continue;
    		else
    		sum.pb(count);	 
    	}

    	if(sum.size()==0)
    	cout<<"0\n";
    	else
    	{	
        
          int min = sum.at(0);

       	  for( int i=0 ; i<sum.size() ; i++)
    	    {
               if(sum.at(i)<min)
               	  min=sum.at(i);
    		}

    		cout<<min-1<<"\n";
        
        }

    //TLE;    
	return 0;
}