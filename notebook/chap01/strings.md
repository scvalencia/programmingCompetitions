# Basic string processing

### Reverse a String

```java
public static String reverse(String input) {
    char[] in = input.toCharArray();
    int begin = 0;
    int end = in.length - 1;
    char temp;
    while(end > begin) {
    	swap(in[begin], in[end]);
        end--;
        begin++;
    }
    return new String(in);
}
```