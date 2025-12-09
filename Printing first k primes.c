int n = 2;
while (count <= 10) {
    int i = 2; int flag = 0; 
    while (i < n) {
        if (n % i == 0) {
            flag = 1; break;
        }
        i = i+1;
    }
    if (0 == flag) {
        printf("The %d prime is %d\n", count, n);
        count++;
    }
    n++;
}
