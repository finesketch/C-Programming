//
//  main.c
//  Heap
//
//  Created by Kyle Chew on 8/9/15.
//  Copyright (c) 2015 FineSketch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>  // malloc() and free()

typedef struct {
    float heightInMetters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p)
{
    return p->weightInKilos / (p->heightInMetters * p->heightInMetters);
}

int main(int argc, const char * argv[])
{
    // declare a pointer
    float *starOfBuffer;
    
    // ask to use some bytes from the heap
    starOfBuffer = malloc(1000 * sizeof(float));
    
    // use the buffer ...
    
    // relinguish your clain on the memory so it can be reused
    free(starOfBuffer);
    
    // forget where that memory is
    starOfBuffer = NULL;
    
    // --------------------------
    
    // Person
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    // fill in two members of the struct
    mikey->weightInKilos = 96;
    mikey->heightInMetters = 1.7;
    
    // print out the BMI of the original Person
    float mikeyBMI = bodyMassIndex(mikey);
    printf("mikey has BMI of %f\n", mikeyBMI);
    
    // let the memory be recycled
    free(mikey);
    
    // forget where it was
    mikey = NULL;
    
    // --------------------------
    
    // exit with "zero" error
    return 0;
}
