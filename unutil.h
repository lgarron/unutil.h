#ifndef UNUTIL_H_
#define UNUTIL_H_

#include "stddef.h"

/*
   Authors: Lucas Garron and Brett Wines
   A file to go alongside util.h
*/

// Type declarations
struct KEITH {};
struct VIEWPOINT {};
typedef int pid_t;
typedef void* uintptr_t;

//Allocates a block of size bytes of memory
void malloc_and_forget(int size);

//Reverses the given string twice in place
void strrevrev(char* str);

//Returns a pointer to the first occurrence of str3 in str2 in str1,
//or a null pointer if str2 is not part of str1 or str3 is not a part of str2.
char* strstrstr(char* s1, char* s2, char* s3);

//Look for a long long in a long long (similar to strstr(), but for long longs)
long long llll(long long l1, long long l2);

//The identity function
void* id (void* ptr);

//Convert integer to integer
int itoi(int value);

//Convert string to string
char* atoa(char* str);

//Tweet the string
int tweet(char* str);

//Creates deadlock (works for any thread-scheduler)
void deadlock(void);

//Returns the number 4.
int return4(void);

//Doesn't copy the values of num bytes from the location pointed by source directly to the memory block pointed by destination.
void* memdntcpy (void * destination, void * source, size_t num);

//Bogosort. Sorts the num elements of the array pointed by base, each 
//element size bytes long, using the compar function to determine the order.
int bsort(void *base, size_t nel, size_t width, int (*compar)(void *, void *));

//Bogosearch. Searches the given key in the array pointed by base 
//(which is formed by num elements, each of size bytes), and returns
//a void* pointer to a matching element, if found. Each iteration, 
//the algorithm randomly picks indices until element is found or
//all indices have been picked.
void* bsearch(void* key, void* base, size_t num, size_t size, int (*compar)(void*,void*));

//Randomized Bubblesort. Sorts the num elements of the array pointed by base, each 
//element size bytes long, using the compar function to determine the order. The
//algorithm randomly swaps (random) pairs of indices until the array pointed to
//by base is sorted.
void rbubblesort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));

//A quick way to generate SIGSEGV
void segfault(void);

//Takes a pointer to Keith and any number of varargs, and does what Keith would do.
void* wwkd(struct KEITH* htiek, ...);

//Correct any recent biases in the output of rand(); by making sure numbers don't repeat too soon.
int rand_gam(void);

//Takes in two arguments causes the disagreement between them resolve. May modify one or both viewpoints.
void resolve_arguments(struct VIEWPOINT* v1, struct VIEWPOINT* v2);

//Fork without cost. Useful for solving NP problems in polynomial time.
pid_t ndfork(void);

//A syscall. Disables interrupts permanently.
void intr_disable_permanently(void);

//
void do_nothing(void);

//Deallocates the block of memory pointed to by ptr with probability p
void rfree(void* ptr, double p);

//free()s all allocated pointers. Returns 0 on success.
int freeall(void);

//Returns the virtual address corresponding to va, which must be a kernel virtual address.
uintptr_t vtov (void *va);

//Generate a random number, randomly selecting whether to use a good RNG.
int randrand(void);

#endif