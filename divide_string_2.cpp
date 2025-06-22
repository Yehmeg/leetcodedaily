#include <iostream>
#include <cstring>  
#include <cstdlib>  
using namespace std;
char** divideString(char* s, int k, char fill, int* returnSize) {
    int len = strlen(s);
    *returnSize = (len + k - 1) / k;  

    char** result = (char**)malloc((*returnSize) * sizeof(char*));

    for (int i = 0; i < *returnSize; ++i) {
        result[i] = (char*)malloc((k + 1) * sizeof(char)); 
        int j;
        for (j = 0; j < k; ++j) {
            int index = i * k + j;
            if (index < len) {
                result[i][j] = s[index];
            } else {
                result[i][j] = fill;
            }
        }
        result[i][k] = '\0'; 
    }

    return result;
}
int main() {
    char s[] = "abcdefg";  
    int k;
    printf("enter number of character per division");
    scanf("%d", &k);            
    char fill = 'x';   
    int returnSize;        
    
    char** groups = divideString(s, k, fill, &returnSize);

    printf("Divided groups:\n");
    for (int i = 0; i < returnSize; ++i) {
        printf("%s\n", groups[i]);
        free(groups[i]); 
    }

    free(groups); 
    return 0;
}