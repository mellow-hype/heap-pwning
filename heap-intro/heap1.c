#include <stdlib.h>
#include <stdio.h>

int main()
{
	/*
	  malloc(size_t n)
	  Returns a pointer to a newly allocated chunk of at least n
	  bytes, or null if no space is available. Additionally, on
	  failure, errno is set to ENOMEM on ANSI C systems.

	  If n is zero, malloc returns a minimum-sized chunk. (The
	  minimum size is 16 bytes on most 32bit systems, and 24 or 32
	  bytes on 64bit systems.)  On most systems, size_t is an unsigned
	  type, so calls with negative arguments are interpreted as
	  requests for huge amounts of space, which will often fail. The
	  maximum supported value of n differs across systems, but is in
	  all cases less than the maximum representable value of a
	  size_t.
	*/
	// Allocate a 10-byte buffer using malloc()
	char *buffer1 = (char *)malloc(10);
	printf("buffer1 (10 bytes) address: 0x%p\n", (void *) buffer1);
	strcpy(buffer1, "Hello!");
	
	// Allocate a 30-byte buffer using malloc()
	char *buffer2 = (char *)malloc(30);
	printf("buffer2 (30 bytes) address: 0x%p\n", (void *) buffer2);
	strcpy(buffer2, "Hello!");
	
	// Free the memory that was previously allocated
	printf("-free buffer1-\n");
	free(buffer1);

	// Allocate a 10-byte buffer using malloc()
	char *buffer3 = (char *)malloc(10);
	printf("buffer3 (10 bytes) address: 0x%p\n", (void *) buffer3);
	strcpy(buffer3, "Hello!");

	// Free the memory that was previously allocated
	printf("-free buffer2-\n");
	free(buffer2);
	
	printf("-free buffer3-\n");
	free(buffer3);

	return 0;
}
