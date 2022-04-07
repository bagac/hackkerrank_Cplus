
/*
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

Constraints

1<=N<=10^6; 1<=A[i]<=10^6

Output Format

In trên 1 dòng 2 chỉ số mà bạn tìm được.

char	        1 byte	-128 tới 127 hoặc 0 tới 255
unsigned char	1 byte	0 tới 255
signed char	    1 byte	-128 tới 127
int	            2 hoặc 4 bytes	-32,768 tới 32,767 hoặc -2,147,483,648 tới 2,147,483,647
unsigned int	2 hoặc 4 bytes	0 tới 65,535 hoặc 0 tới 4,294,967,295
short	        2 bytes	-32,768 tới 32,767
unsigned short	2 bytes	0 tới 65,535
long	        4 bytes	-2,147,483,648 tới 2,147,483,647   10^6 = 1 000 000
unsigned long	4 bytes	0 tới 4,294,967,295
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int size_array;
    cin >> size_array;
    unsigned int array[size_array];
    unsigned int max_num = 1, min_num = 1000000;
    int pos_max = 0, pos_min = 0;
    for(int i = 0; i < size_array; i++){
        cin >> array[i];
        if(array[i] >= max_num){
            max_num = array[i];
            pos_max = i;
        } 
        else if(array[i] <= min_num) {
            min_num = array[i];
            pos_min = i;
        }
    }
    cout << pos_min << " " << pos_max;
    return 0;
}
