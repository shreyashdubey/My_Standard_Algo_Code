#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	const int N = 1e6+5;
	static int d[N];	
	vector<int> primes;
	for(int i=0;i<N;i++) d[i]=i;
	d[0]=-1,d[1]=-1;
	for(int i=2;i<=N;i++) 
	{
		if(d[i]==i)
		{
			primes.emplace_back(i);
		}
		for(int j=0; j < (int) primes.size() and primes[j] <= d[i] and i*primes[j]<N ; j++)
		{
			d[i*primes[j]]=primes[j];
		}
	}
	for(int i=2;i<=100;i++) if(i==d[i]) cout<<i<<" ";
	// for biggest factor of x not equal to x =  x/d[x]; ex-25 -> 5
	// prime factorization;
	/*vector<int>prime_factors;
	int x; cin>>x;
	while(x!=1)
	{
		prime_factors.emplace_back(d[x]);
		x/=d[x];
	}
	for(auto i:prime_factors) cout<<i<<" ";*/

}