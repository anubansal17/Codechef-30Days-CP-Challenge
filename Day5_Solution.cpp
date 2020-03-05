#include <iostream>
using namespace std;
#define ll long long 
#define ul unsigned long long
ul j, N;
 ll  max_end = 0, maxSum = 0;
int main() {
	int T;
	cin>>T;
	
	for(int i=0; i<T; i++)
	{
	   max_end = 0;
	   maxSum = 0;
	   cin>>N;
	   ul arr[N];
	   for (j=0; j<N; j++) {
	       cin>>arr[j];
	   }
	   for(j=0; j<N; j++) {
	       max_end += arr[j];
	       if(max_end<0)
	            max_end = 0;
	       if(maxSum<max_end)
	            maxSum = max_end;
	   }
	   cout<<maxSum<<endl;
	}
	return 0;
}
