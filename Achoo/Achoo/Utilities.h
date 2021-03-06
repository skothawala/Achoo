//
//  Utilities.h
//  Achoo
//
//  Created by Saad K on 4/17/15.
//  Copyright (c) 2015 Saad K. All rights reserved.
//

#ifndef __Achoo__Utilities__
#define __Achoo__Utilities__

#include <stdio.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

//separate class b/c code is reused in each of the other classes.
class Utilities{
public:
    static vector<string> &split(const string &s, char delim, vector<string> &elems);
    static vector<string> split(const string &s, char delim);

};
#endif /* defined(__Achoo__Utilities__) */
