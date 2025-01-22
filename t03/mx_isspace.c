#include <stdbool.h>

bool mx_isspace(char c){
    char arr[] = {' ','\t','\n','\r','\v','\f'};
    for (int i = 0; i < 6; i++){
        if (arr[i] == c)
        {
            return 1;
        }
    }
    return 0;
}
