class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {   

    int lo=0;
    int n= arr.size();
    int hi=n-1; 
    vector<int>ans;
    if(arr[lo]> x){//case1 lower then first
        for(int i=0;i<k;i++){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
    return ans;
    }
    if(arr[hi]<x){ //case2 greater than last
        for(int i=n-1;i>=n-k;i--){
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
    return ans;
    }
    

    //lower and upper bound 
    int lob=-1;
    int upb=-1;
    //check if present in arr or not
    bool abs_=true;
    

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            abs_=false;
            lob=mid-1;
            upb=mid+1;
            ans.push_back(arr[mid]);
            break;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else lo=mid+1;
    }
    // if present


    //if absent
    if(abs_){
        lob=hi;
        upb=lo;
    
    }
    else{
        k--;

    }
    while(k--){
        int val=-1;
        if(upb<n && lob>=0){// inbound
            if(abs(x-arr[lob])==abs(x-arr[upb])){
                val=min(arr[lob],arr[upb]);
                if(arr[lob]==val) lob--;
                else upb++;
                ans.push_back(val);
            }
            else if(abs(x-arr[lob])>abs(x-arr[upb])){
                val=arr[upb];
                upb++;
                ans.push_back(val);
            }
            else if(abs(x-arr[lob])<abs(x-arr[upb])){
                int val=arr[lob];
                lob--;
                ans.push_back(val);
            }
        }
        else if (upb<n){//lower is out of bound
            val=arr[upb];
            upb++;
            ans.push_back(val);

        }
        else if( lob>=0)//upper out of bound
        {   val=arr[lob];
            lob--;
            ans.push_back(val);

        }
        
    }




    sort(ans.begin(),ans.end());
    return ans;
        
    }
};
// memory usage low
static const bool __accel_stdio = []() {
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return std::ios_base::sync_with_stdio(false);
}();

alignas(std::max_align_t) unsigned char __accel_alloc_buffer[0x6fafffff];
std::size_t __accel_alloc_buffer_pos = 0;

__attribute__((optimize("O3")))
__attribute__((always_inline))
static  void* __accel_alloc(std::size_t size, std::size_t alignment) {
    if (size == 0) size = 1;

    std::uintptr_t base =
        reinterpret_cast<std::uintptr_t>(__accel_alloc_buffer);
    std::uintptr_t p = base + __accel_alloc_buffer_pos;

    // alignment is assumed to be power-of-two (true for standard alignments)
    std::uintptr_t aligned = (p + (alignment - 1)) & ~(alignment - 1);

    __accel_alloc_buffer_pos =
        static_cast<std::size_t>(aligned - base) + size;

    return reinterpret_cast<void*>(aligned);
}

// ---- normal new/delete ----
void* operator new(std::size_t size) {
    return __accel_alloc(size, alignof(std::max_align_t));
}
void* operator new[](std::size_t size) {
    return __accel_alloc(size, alignof(std::max_align_t));
}
void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}

// ---- sized delete (C++14+) ----
void operator delete(void*, std::size_t) noexcept {}
void operator delete[](void*, std::size_t) noexcept {}

// ---- aligned new/delete (C++17+) ----
void* operator new(std::size_t size, std::align_val_t al) {
    return __accel_alloc(size, static_cast<std::size_t>(al));
}
void* operator new[](std::size_t size, std::align_val_t al) {
    return __accel_alloc(size, static_cast<std::size_t>(al));
}
void operator delete(void*, std::align_val_t) noexcept {}
void operator delete[](void*, std::align_val_t) noexcept {}

// ---- sized + aligned delete (C++17+) ----
void operator delete(void*, std::size_t, std::align_val_t) noexcept {}
void operator delete[](void*, std::size_t, std::align_val_t) noexcept {}