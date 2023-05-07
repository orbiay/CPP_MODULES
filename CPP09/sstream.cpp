#include <map>
#include <string>
#include <algorithm>
#include<iostream>

int main() {
    std::map<int, std::string> myMap;
    myMap[10] = "value1";
    myMap[20] = "value2";
    myMap[30] = "value3";

    int key = 29;
    std::map<int, std::string>::iterator it = myMap.upper_bound(key);
    std::map<int, std::string>::iterator it2 = myMap.lower_bound(key);
    if (it == myMap.end()) {
        // no key in the map is greater than or equal to the given key
        // so the last key in the map is the closest key
        --it;
    } else if (it != myMap.begin()) {
        std::map<int, std::string>::iterator prev = it;
        --prev;
        if (key - prev->first < it->first - key) {
            // the previous key is closer
            it = prev;
        }
    }
    
    // it now points to the closest key to the given key, or the end of the map
    int closestKey = it->first;
    std::string value = it->second;
    int closestKey2 = it2->first;
    std::string value2 = it2->second;
    std::cout<<"upper = "<<closestKey<<std::endl;
    std::cout<<"lower = "<<closestKey2<<std::endl;
}
