#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    printf("The next character of %c (%1) is %c (%i)\n", c, c, c+1, c+1);
    
    system("PAUSE");
    return 0;
}
    

  
  
    
