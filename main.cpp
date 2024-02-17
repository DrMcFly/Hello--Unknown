#include<iostream>

struct asm_math {
    
    int add(int *a, int *b)
    {
    int result{};

    asm volatile (
        "mov (%[a]), %[result]\n"
        "add (%[b]), %[result]"
        : [result] "=r" (result)
        : [a] "r" (a),
          [b] "r" (b)
    );

    return result;

    }

    int sub(int *a, int *b)
    {
    int result{};

    asm volatile (
        "mov (%[a]), %[result]\n\t"
        "sub (%[b]), %[result]"
        : [result] "=r" (result)
        : [a] "r" (a),
          [b] "r" (b)
    );

    return result;

    }

} math;

int main()
{
    
    int *a = new int;
    *(a) = 2;
    int *b = new int;
    *(b) = 6;    
    
    std::cout << "Result: " << math.sub(a, b) << std::endl;

    
    return 0;
}


