#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int check(multiset<int> &s,bool &poss)
{
	int score = 0;
	if(!s.empty() && poss)
	{
		int val = (*s.rbegin());
		score = val;
		s.erase(s.find(val));
	}
	else
		poss = false;
 
	return score;
}
 
pair<ll,ll> solve(int mask,vector<int> &v)
{
	multiset<int> odd,even;
	for(int x:v)
	{
		if(x%2==0)
			even.insert(x);
		else
			odd.insert(x);
	}
	ll a_score = 0;
	ll b_score = 0;
	bool a_poss = true;
	bool b_poss = true;
	while(a_poss || b_poss)
	{
		if(mask == 0)
		{
			a_score += check(even,a_poss);
			b_score += check(even,b_poss);
			mask = 3;
		}
		else if(mask == 1)
		{
			a_score += check(even,a_poss);
			b_score += check(odd,b_poss);
			mask = 2;
		}
		else if(mask == 2)
		{
			a_score += check(odd,a_poss);
			b_score += check(even,b_poss);
			mask = 1;
		}
		else if(mask == 3)
		{
			a_score += check(odd,a_poss);
			b_score += check(odd,b_poss);
			mask = 0;
		}
	}
	return {a_score,b_score};
}
 
void mainSolve()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	ll ans = 0;
	vector<pair<ll,ll>> poss;
	for(int i=0;i<=3;i++)
		poss.push_back(solve(i,v));
	if(poss[0].second == poss[1].second)
		ans = max(ans,max(poss[0].first,poss[1].first));
	else if(poss[0].second > poss[1].second)
		ans = max(ans,poss[0].first);
	else
		ans = max(ans,poss[1].first);
	if(poss[2].second == poss[3].second)
		ans = max(ans,max(poss[2].first,poss[3].first));
	else if(poss[2].second > poss[3].second)
		ans = max(ans,poss[2].first);
	else
		ans = max(ans,poss[3].first);
	cout<<ans<<endl;
}
 
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    mainSolve();
  }
  return 0;
}