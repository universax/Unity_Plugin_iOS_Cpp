//
//  main.cpp
//  Unity_Plugin_iOS_Cpp
//
//  Created by YOHEI KAJIWARA on 2019/01/23.
//  Copyright © 2019 YOHEI KAJIWARA. All rights reserved.
//

#include <stdio.h>

using namespace std;

class Unity_Plugin_iOS_Cpp {
public:
    Unity_Plugin_iOS_Cpp() {
        mInt = 11;
    }
    ~Unity_Plugin_iOS_Cpp() {}
    
    int mInt;
    
    int getInt() {
        return mInt;
    }
    
    void setInt(int value) {
        mInt = value;
    }
};

extern "C" {
    Unity_Plugin_iOS_Cpp plugin;
    
    int getInt_iOS_Cpp() {
        return plugin.getInt();
    }
    
    void setInt_iOS_Cpp(int value) {
        plugin.setInt(value);
    }
    
}
