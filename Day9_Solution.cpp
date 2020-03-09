#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int count = 0;
	for (int i=0; i<T; i++) {
	    int flag[1000] = {0};
	    int flag1[1000] = {0};
	    int N;
	    count = 0;
	    cin>>N;
	    char arr[N][N];
	    for (int k=0; k<N; k++) {
	        for (int j=0; j<N; j++) {
	            cin>>arr[k][j];
	        }
	    }
	    
	    for (int k=N-1; k>=0; k--) {
	        for (int j=N-1; j>=0; j--) {
	            if(arr[k][j] == '.') {
	                if(k==N-1 && j==N-1) {
	                    count++;
	                } else if(k==N-1 && flag[k]!=1) {
	                    count++;
	                } else if(flag[k] != 1 && flag1[j] != 1) {
	                    count++;
	                }
	            } else {
	                   flag[k] = 1;
	                   flag1[j] = 1;
	                   
	            }
	            
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
