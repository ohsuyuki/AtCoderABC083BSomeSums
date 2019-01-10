//
//  main.cpp
//  AtCoderABC083BSomeSums
//
//  Created by osu on 2019/01/03.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N(0), A(0), B(0);

    std::cin >> N >> A >> B;

    int ans = 0;
    for(int i=1; i<=N; i++) {
        int total(0), tmp(i);
        while(tmp != 0) {
            total += (tmp % 10);
            tmp /= 10;
        }

        if(A <= total && total <= B) {
            ans += i;
        }
    }

    std::cout << ans;
    
    return 0;
}
