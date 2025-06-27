#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//For GCD
long long gcd(long long a, long long b)
{
if (a == 0)
 return b;
return gcd(b % a, a);
}
//For Combination
long long nCr(long long n, long long r) {
if (r > n) return 0;
if (r == 0 || n == r) return 1;
long double res = 0;
for (long long i = 0; i < r; i++) {
  res += log(n-i) - log(i+1);
}
return (long long)round(exp(res));
}
//For checking substring
long long isSubstring(string s1, string s2)
{
 // using find method to check if s1 is
 // a substring of s2
if (s2.find(s1) != string::npos)
   return s2.find(s1);
 return -1;
}
long long dp(long long n,vector<long long> &v,vector<long long> &m)
{
  if(m[n]!=-1)
  {
    return m[n];
  }
  else
  {

  if(n<1)
  {
    return 0;
  }
  else if(n==1)
  {
    return v[n]*n;
  }
  else if(n==2)
  {
    return max(v[1],v[2]*2);
  }
  else
  {
    long long p=v[n]*n+dp(n-2,v,m);
    long long r=v[n]*n+dp(n-3,v,m);
    long long q=v[n-1]*(n-1)+dp(n-3,v,m);
    p=max(p,r);
    return m[n]=max(p,q);
  }
  }
}


int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
//Start Your Code Here:
long long z;
cin>>z;
while(z--)
{
  long long n;
  cin>>n;
  long long gc=0;
  vector<long long>v(n,0);
  for(long long i=0;i<n;i++)
  {
    cin>>v[i];
  
  }
  sort(v.begin(),v.end());
  vector<long long>o(n,0);
  o[0]=v[0];
  for(long long i=1;i<n;i++)
  {
    o[i]=v[i];
   v[i]-=v[0];
  }
v[0]=0;
  for(long long i=0;i<n;i++)
  {
    gc=gcd(gc,v[i]);
  }
  long long take= o[n-1];
  long long l=0;
  
if(gc!=0)
{
  for(long long i=0;i<n;i++)
  {
    long long diff=take-o[i];
    l+=diff/gc;
  }
  long long p=0;
  for(long long i=1;i<=n;i++)
  {
        long long m=take-gc*i;
        bool check=binary_search(o.begin(),o.end(),m);
        if(!check)
        {
         
          l+=i;
          break;
        }
  }
}
  
if(gc==0||n==1)
{
  cout<<n<<endl;
}
else
{
  cout<<l<<endl;
}
  

  

}

}