#include <iostream>

int main()
{
    //Try to modify x1 & x2 and see the compilation output
    int x = 5;
    const int MAX = 12;
    int &ref_x1 = x; //can be changed
    const int &ref_x2 = x; //const reference to const value, can't be changed
        
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x; //its a pointer to a const value, can't be changed value but can change reference
    int *const ptr2 = &x; //const pointer, can change value but not the reference
    const int * const ptr3 = &x;
        
    //Find which declarations are valid. If invalid, correct the declaration
    const int *ptr4 = &MAX; //OK
    const int *ptr5 = &MAX; //Not OK: int *ptr4 = &MAX;
        
    const int &r1 = ref_x1; //OK
    const int &r2 = ref_x2; //Not OK: int &r2 = ref_x2;
        
    int *p_ref1 = &ref_x1; //Not OK: int *&p_ref1 = ptr1;
    const int *p_ref2 = &ref_x2; //Not OK: const int *&p_ref2 = ptr2;
}