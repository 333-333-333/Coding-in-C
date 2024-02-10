#include <stdio.h>

int main() {
    
	int age; 
	printf("Enter age: ");
	scanf("%d", &age);
	
	if(age >= 18)
	    printf("The person is eligible.");
	else
	    printf("The person is not elible.");
	return 0;
}
