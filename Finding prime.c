int n; scanf("%d", &n);
for (int i=2; i<= n; i++) { 
    int count = 0;
    while (n % i == 0) {
        count++; n=n/i;
    }
    if (count > 0 ) {
        printf("%d %d\n", i , count);
    }
}
