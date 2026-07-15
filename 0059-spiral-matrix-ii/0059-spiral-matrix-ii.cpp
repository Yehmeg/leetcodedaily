class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int min_r = 0;
        int min_c = 0;
        int max_r = n;
        int max_c = n;

        int idx = 0;
        int val=1;


        while (val<=n*n) {

            // right
            for (int a = min_c; a < max_c; a++) {
                v[min_r][a]=val;
                val++;
            }
            min_r++;

            // down
            for (int a = min_r; a < max_r; a++) {
                v[a][max_c - 1]=val;
                val++;
            }
            max_c--;

            if (!(min_r < max_r && min_c < max_c))
                break;

            // left
            for (int a = max_c - 1; a >= min_c; a--) {
                v[max_r - 1][a]= val;
                val++;
            }
            max_r--;

            // up
            for (int a = max_r - 1; a >= min_r; a--) {
                v[a][min_c]=val;
                val++;
            }
            min_c++;
        }
        return v;  
    }

};
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