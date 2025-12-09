// strings are in arrays a and b
int i = 0;
while (a[i] == b[i]) {
    if ((a[i] == '\0') || (b[i] == '\0')) 
        break;
    i++;
}
if (a[i] == '\0' && b[i] == '\0') 
    printf("SAME");
else
    printf("NOT SAME");
