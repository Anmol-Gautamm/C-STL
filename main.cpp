// unordered_set in C++ STL
// Vector in C++ STL
// Set in C++ STL
// unordered_multiset in C++ STL
// multiset in C++ STL
// unordered_map in C++ STL
// map in C++ STL
// unordered_multimap in C++ STL
// queue in C++ STL
// stack in C++ STL
// deque in C++ STL
// priority_queue in C++ STL
// multimap in C++ STL
// list in C++ STL
// next_permutation in STL
// __builtin_popcount() in STL
// sort() in C++ STL
// min_element() in C++ STL
// max_element() in C++ STL


// algorithms
// containers  1.
// function
// iterators


// #include <bits/stdc++.h>
// using namespace std;
// void print()
// {
//     cout<<"Anmol gautam "<<endl;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }cout<<*it<<" "; 



// int main()
// {
// //     print(); 
// //    int s = sum(1, 2);
// //    cout<<s<<endl;
// // here voide function not returning anythinginside the funtion where as in the int sum  function returns the sum of the two number


//     return 0;
// }






// pair
// vector container
// vector is dynamic in nature whereas array are of fied size in the nature of storing the data inside of it 
#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
      pair<int, int> p= {1,2};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> q= {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
    
    pair<int ,int >arr[] ={{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[1].second;
}





