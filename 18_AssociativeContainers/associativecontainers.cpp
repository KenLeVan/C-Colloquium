/*

I.
    std::set and std::multiset
        they contain data in ascending oreder and with the use of st::less<key> you can change the comparator
        Also, they have treelike structure which allows to do operations increadibly fast
        In addition, they automatically allocate and clear memory

        Difference berween std::set and std::multiset
            std::set can only have unique data
            std::multiset can store repeating data
        
II.
    std::map and std::multimap
        they have similar structure to std::set and std::multiset
        They store data "key - value"

III.
    unordered set
        it stores data in hash table and doesnt have any order of elements
        in order to put a datatype into set the datatype has to be able to hash, so the std::hash must be declared for that datatype
        hash table consists of an array of "buckets" and hash function evaluats a key, which then is used to calculate index of a bucket
        if 2 keys have the same hash it is called collision

IV.
    user datatypes with stl
        for user datatypes you need the class to be copyConstructable and moveConstractable
        you also need to overload < and >

        for unordered set and unordered map you would need hashable and operator==

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>

int main()
{
    std::set<int> vec = {4, 1, 6, 5, 11, 10, 16, 13};
    std::set<int> s = std::move(vec);
}