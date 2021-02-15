/*************************************************************************
	> File Name: main.cpp
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

#ifdef DEBUG

#define LOG(frm, args...) { \
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__); \
    printf(frm, ##args); \
    printf("\n"); \
}

#else 

#define LOG(frm, args...) 

#endif

void test() {
    LOG("hello world");
    int a = 123;
    LOG("a = %d", a);
    return ;
}

#define CAT(a, b) a##b

int main() {
    printf("only main\n");
    int hugcaptain = 9973;
    CAT(hug, captain) = 10000;
    LOG("hugcaptain = %d", hugcaptain);
    LOG("hello world");
    test();
    return 0;
}
