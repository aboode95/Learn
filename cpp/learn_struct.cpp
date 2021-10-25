// Modified program using structures
#include <stdio.h>

struct values
{
    int first, second;
};

typedef struct values twoNumbers; // "twoNumbers" means the same as writing "struct values"

twoNumbers v1; // "twoNumbers" or "struct values" is the type of variable of "v1"

twoNumbers bedIncline() // "twoNumbers" or "struct values" is the type of variable of "bedIncline"
{
    
    
    int input;
    printf("Enter something \n");
    scanf("%d", &input);
    
    if (input == 1)
    {
        v1 = {23, 43};
    }
    else
    {
        v1 = {12, 12};
    }
    
    return v1;
}

int main()
{
    twoNumbers v2; // "twoNumbers" or "struct values" is the type of variable of "v2"
    
    twoNumbers* v3; // struct-pointer variable "v3"
    
    v2 = bedIncline(); // struct "v2" of type "twoNumbers" receiving struct from "bedIncline" of type "twoNumbers"
    
    v1.first = 34;
    
    printf("v2 first = %d, second = %d \n", v2.first, v2.second);
    printf("v1 first = %d, second = %d \n", v1.first, v1.second);
    
    v3 = &v1;
    
    v3->first = 89;
    v3->second = 75;
    
    printf("v1 first = %d, second = %d", v1.first, v1.second);
    
    
    return 0;
}