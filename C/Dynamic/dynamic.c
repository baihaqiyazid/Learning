#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int *ptr= (int*)malloc (5*sizeof(int));
//	int *ptr= (int*)calloc (5, sizeof(int));

	ptr = realloc(ptr, 10*sizeof(int));
	
	ptr[0]=30;
	ptr[1]=50;
	
	printf("value is %d, %d, %d\n\n", ptr[0], ptr[1], ptr[2]);
	
	free(ptr);
	
	
	//printf("value is %d, %d, %d", ptr[0], ptr[1], ptr[2]);
	
	//dinamic();
	
	
   return 0;
}

int dinamic(){
 
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
 
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
            printf("%d, ", ptr[i]);
        }

    }
 	return 0;
}
