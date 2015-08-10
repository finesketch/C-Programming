//
//  main.c
//  MemoryAddress
//
//  Created by Kyle Chew on 8/9/15.
//  Copyright (c) 2015 FineSketch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // create variable of integer
    int i = 17;
    
    // display the memory address of the above variable using the string token of %p
    printf("i stores its value at this memory address: %p\n", &i); // like 0x7fff5fbff7fc
    
    // or get the memory address of argc
    printf("argc stores its value at this memory address: %p\n", &argc); // like 0x7fff5fbff808
    
    // or get the memory address of argv
    printf("argv[] stores its value at this memory address: %p\n", &argv); // like 0x7fff5fbff800
    
    // or get the memory address of main function
    printf("main function stores its value at this memory address: %p\n", &main); // like 0x100000e20
    
    // addressOfi is a variable that is a pointer to a int
    int *addressOfi = &i;
    
    // i is stored in this memory address
    printf("i stores its value at %p\n", addressOfi);
    
    // display integer value by using the memory address
    printf("The int stored at addressOfi is %d\n", *addressOfi);
    
    // use * operator on the left-hand side of the assignment to store data at a particular memory address
    *addressOfi = 88;
    
    // display the updated value for i
    printf("Now i is %d\n", i);
    
    // data size for memory address
    printf("A pointer is %zu bytes\n", sizeof(int *));
    
    // data size for memory address, same as above
    printf("(sizeof(addressOfi)) A pointer is %zu bytes\n", sizeof(addressOfi));
    
    // float memory address check
    float myFloat = 20.2;
    printf("myFloat stores its value at this memory address: %p\n", &myFloat);
    printf("A pointer is %zu bytes\n", sizeof(float *));
    
    // float memory address check
    short myShort = 20.2;
    printf("myShort stores its value at this memory address: %p\n", &myShort);
    printf("A pointer is %zu bytes\n", sizeof(short *));
    
    // NULL check
    float *myPointer;
    myPointer = NULL;
    
    
    return 0;
}
