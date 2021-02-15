/*************************************************************************
	> File Name: define.cpp
	> Author: chaidisheng
	> Mail: chaidisheng@stumail.ysu.edu.cn
	> Created Time: 
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

#define PI 3.1415926
#define S(a, b) a * b

int main() {
    printf("%lf\n", 2 * PI);
    printf("S(3, 4) = %d\n", S(3, 4));
    printf("S(3 + 9, 4) = %d\n", S(3 + 9, 4));
    int n;
    S(int, p) = &n;
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__func__ = %s\n", __func__);
    printf("__PRETTY_FUNCTION__ = %s\n", __PRETTY_FUNCTION__);
    return 0;
}
