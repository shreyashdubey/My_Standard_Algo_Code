#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
#define fio ios_base::sync_with_stdio(false)
#define ll long long int
int main()
{
    fio;
    PBDS St; // ye wala data Structure set ki trh function kre ga agr koi aur chahiye toh upr parameter change krne hon gn.
    St.insert(1);
    St.insert(10);
    St.insert(20);
    St.insert(30);
    St.insert(40);
    St.insert(50);

    //find_by_order(index) iterator return krta hi uss element ka jiska aapne index(0 based) diya hi, aur agr limit se bahar diya toh 0 return kre ga


    // Kth Largest Element till x (basically ith index mn kya hi ye bataie ga in O(logn));
    for(int i=0;i<(int)St.size();i++)
      cout<<i<<" "<<*St.find_by_order(i)<<endl;
    cout<<*St.find_by_order(100)<<endl;
    
    //order_of_key(element) count return krta hi ki kitne element chote hn given element se
    cout<<St.order_of_key(0)<<endl;
    
}