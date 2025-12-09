// string is in the array named str 
int l = 0;
int h = strlen(str) - 1;
while (h > l) {
    if (str[l++] != str[h--]) {
        printf("NOT PALINDROME");
        break;
    }
}
if (h == l) 
    printf("PALINDROME");
