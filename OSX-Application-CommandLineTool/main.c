//
//  main.c
//  OSX-Application-CommandLineTool
//
//  Created by Sword on 5/7/14.
//  Copyright (c) 2014 Sword. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define Max 1000

int main(int argc, const char * argv[]){
    char a[Max + 1] = "0", b[Max + 1] = "0", c[Max + 1] = "1";
    int T;
    while (scanf("%d", &T) != EOF) {
        int i;
        for (i = 0; i < T; i++) {
            int alen, blen, clen, ten = 0;
            scanf("%s%s", a + 1, b + 1);
            alen = strlen(a + 1);
            blen = strlen(b + 1);
            clen = alen > blen ? alen : blen;
            c[clen + 1] = 0;
            do {
                char x = a[alen] + b[blen] - '0' + ten;
                ten = x > '9' ? 1 : 0;
                c[clen] = x > '9' ? x - 10 : x;
                alen = alen > 0 ? alen - 1 : alen;
                blen = blen > 0 ? blen - 1 : blen;
            } while (--clen > 0);
            c[0] = '0' + ten;
            printf("Case %d:\n", i + 1);
            printf("%s + %s = %s\n", a + 1, b + 1, c + !ten);
            if (i + 1 != T)
                printf("\n");
        }
    }
    return 0;

    /* 1001
    int n;
    while (scanf("%d", &n) != EOF) {
        int sum = 0, i;
        for (i = 0; i <= n; i++) {
            sum += i;
        }
        printf("%d\n\n", sum);
    }
    return 0;
     */

    /* 1000
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)printf("%d\n",a+b);
r   */
}
