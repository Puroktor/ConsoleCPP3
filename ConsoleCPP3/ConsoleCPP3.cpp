#include <iostream>

using std::cout;

int main()
{
    int arr[20];
    int otherArr[20];
    int* pArr =arr;
    int* pOther=otherArr;
    char c;
    int length = 0;
    while ((c = fgetc(stdin)) != '\n') {
        *(pArr+length)=c-'0';
        length++;
    }

    for (int i = 0; i < length/2; i++) {
        *(pOther + 2*i) = *(pArr + 2*i + 1);
        *(pOther + 2*i+1) = *(pArr + 2*i);
    }
    if(length%2==1){
        *(pOther + length-1) = *(pArr + length-1);
    }
    for (int i = 0; i < length; i++) {
        cout <<*(pOther+i) ;
    }
    return 0;
}