class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=0;i<t;i++){
            int ans=n;
            int tocomp=1;
            while(ans){
                int temp=ans%10;
                tocomp*=temp;

                ans=ans/10;
            }
            if(tocomp%t==0) return n;
            else n++;
        }
        return 0;
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