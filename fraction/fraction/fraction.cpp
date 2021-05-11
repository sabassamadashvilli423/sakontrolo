#include <iostream>
#include "wiladi.h"
#include<vector>
int main()
{
    vector<wiladi> a;
    wiladi t;
    cin >> t.a >> t.b >> t.c >> t.d;
    a.push_back(t);
    a[0].jami();
    a[0].ganayofi();
    a[0].namravli();
    a[0].sxvaoba();
}