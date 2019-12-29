#include <stdio.h>

int main(){
	
    int a,b;
    scanf("%d", &a); \\set the variables to a and b
    scanf("%d", &b);
    
    int c = b/100; \\third digit
    int d = b/10 - c*10; \\second digit
    int e = b - c*100 - d*10; \\first digit
    
    printf("%d \n%d \n%d \n%d", a*e, a*d, a*c, a*e + a*d*10 + a*c*100); \\4,5,6 and 7
    
    return 0;
}
