//problem:- https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/kth-smallest-number-again-2/

//soln:-
#include <bits/stdc++.h>
using namespace std;



int main() {
    int T; 
    cin >> T; 
    
    while(T--) {
        int N, Q;
        cin >> N >> Q;  
        
        vector<pair<int,int>> ranges(N);
        for(int i=0; i<N; i++) {
            int A, B;
            cin >> A >> B;
            ranges[i] = {A, B};
        }
		sort(ranges.begin(),ranges.end());

		int idx=0;
		for(int i=1;i<ranges.size();i++)
		{
			if(ranges[idx].second>=ranges[i].first)
			{
				ranges[idx].second=max(ranges[idx].second,ranges[i].second);
			}
			else{
				idx++;
				ranges[idx]=ranges[i];
			}

		}
        
        while(Q--)
		{
			int k;
			cin>>k;
			int ans=-1;
			for(int i=0;i<=idx;i++)
			{
				if((ranges[i].second-ranges[i].first+1)>=k)
			 {
				ans=ranges[i].first+k-1;
				break;
			 }
			 else{
				k=k-(ranges[i].second-ranges[i].first+1);
			 }

			}
			
			cout<<ans<<endl;
		}
  }
 return 0;
}
