//
// Created by sanga on 06/04/2023.
//

// Recursive method
int factorial1(int n) {

    if (n == 0)
        return 1;

    return n * factorial1(n - 1);
}

int factorial2(int n){
    int result = 1;
//    int i =1;
//    for (; i <= n; i++){
//        result *=i;
//    }

    int j=1;
    while (j <= n){
        result *=j;
        j++;
    }
    return result;
}
