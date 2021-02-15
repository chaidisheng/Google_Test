/*************************************************************************
	> File Name: attribute.cpp
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

__attribute__((constructor))
void test() {
    printf("test : hello world\n");
    return ;
}

int main() {
    printf("main : hello world\n");
    return 0;
}
