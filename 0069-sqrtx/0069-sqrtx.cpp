#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

class Solution { 
    public: 
    int mySqrt(int x) { 
        int lo = 0; 
        int hi = x; 
        while(lo <= hi){ 
            int mid = lo + (hi-lo)/2; 
            long long m = (long long)mid; 
            long long y = (long long)x; 
            if((m*m) == y) return mid; 
            
            else if(m*m>y) hi=mid -1; 
            else lo = mid + 1;  
        }

        return hi;
    }  
         
};
